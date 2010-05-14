//
//  MIMEPart_FixMime.m
//  MIMEfix
//
//  Created by Kobayashi Katsushi on 06/02/24.
//  Copyright 2006 Katsushi Kobayashi. All rights reserved.
//
//
// $Id: MIMEPart_FixMime.m,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//

#import "MIMEfixPreferences.h"
#import "MIMEPart_FixMime.h"
#import "JMUtilities.h"
static IMP _old_dispositionParameterForKey_IMP = NULL;
static IMP _old_bodyParameterForKey_IMP = NULL;
static NSString *filename = @"filename";
static char csrc[150], cdst[150];

#define VERBOSE
#undef VERBOSE

@implementation MimePart (FixMime)
- (NSString *) fixFilenamme:(NSString *)src
{
	NSString *tmp, *dst = @"";
	NSRange srange, erange, limitrange, crange, space;
	int modified = 0;

	limitrange = NSMakeRange(0, [src length]);
	srange = NSMakeRange(0,0);
	erange = NSMakeRange(0,0);
	srange = [src rangeOfString:@"=?" options:NSLiteralSearch range:limitrange];
	while(srange.location != NSNotFound){
		crange = NSMakeRange(erange.location + erange.length, srange.location - erange.location - erange.length);
#ifdef VERBOSE
		NSLog(@"Start Founded %@ %@ %@", NSStringFromRange(srange), NSStringFromRange(crange), NSStringFromRange(limitrange));
#endif
		tmp = [src substringWithRange:crange];
#ifdef VERBOSE
		NSLog(@"Outside of MIME %@", tmp);
#endif
		space = [tmp rangeOfString:@" " options:NSBackwardsSearch];
		if(space.location == [tmp length] - 1 ){
		tmp = [tmp substringToIndex:space.location];
#ifdef VERBOSE
		NSLog(@"Chop trailing space %@", tmp);
#endif
		}
		dst = [dst stringByAppendingString:tmp];
#ifdef VERBOSE
		NSLog(@"dst %@", dst);
#endif
		limitrange = NSMakeRange(srange.location + srange.length, [src length] - srange.location - srange.length);
#ifdef VERBOSE
		NSLog(@"Forward %@", NSStringFromRange(limitrange));
#endif

		erange = [src rangeOfString:@"?=" options:NSLiteralSearch range:limitrange];
		if(erange.location == NSNotFound){
			erange = NSMakeRange([src length], 0);
		};
		limitrange = NSMakeRange(erange.location + erange.length, [src length] - erange.location - erange.length);

		crange = NSMakeRange(srange.location + srange.length, erange.location - srange.location - srange.length);
#ifdef VERBOSE
		NSLog(@"End Founded %@ %@ %@", NSStringFromRange(erange), NSStringFromRange(crange), NSStringFromRange(limitrange));
#endif
		tmp = [src substringWithRange:crange];
#ifdef VERBOSE
		NSLog(@"Inside of MIME %@", tmp);
#endif

		NSRange mimerange = [tmp rangeOfString:@"ISO-2022-JP?B?" options:NSCaseInsensitiveSearch];
#ifdef VERBOSE
		NSLog(@"Mime %@", NSStringFromRange(mimerange));
#endif
		if(mimerange.location != NSNotFound){
				mimerange = NSMakeRange(mimerange.location + mimerange.length, [tmp length] - mimerange.location - mimerange.length);
				tmp = [tmp substringWithRange:mimerange];
#ifdef VERBOSE
				NSLog(@"tmp %@", tmp);
#endif
				[tmp getCString:csrc maxLength:150 encoding:NSASCIIStringEncoding];
				if(decodeB64(csrc, cdst, 150) <= 0) goto out;
#ifdef VERBOSE
				NSLog(@"length %d %d", strlen(csrc), strlen(cdst));
#endif
				NSString *mdst = [NSString stringWithCString:cdst encoding:NSISO2022JPStringEncoding];
#ifdef VERBOSE
				NSLog(@"converted %@", mdst);
#endif
				if(mdst != NULL){
					modified ++;
					dst = [dst stringByAppendingString:mdst];
				}
#ifdef VERBOSE
				NSLog(@"dst %@", dst);
#endif
			goto mime_exit;
		}
		mimerange = [tmp rangeOfString:@"UTF-8?B?" options:NSCaseInsensitiveSearch];
#ifdef VERBOSE
		NSLog(@"Mime %@", NSStringFromRange(mimerange));
#endif
		if(mimerange.location != NSNotFound){
			mimerange = NSMakeRange(mimerange.location + mimerange.length, [tmp length] - mimerange.location - mimerange.length);
			tmp = [tmp substringWithRange:mimerange];
#ifdef VERBOSE
			NSLog(@"tmp %@", tmp);
#endif
			[tmp getCString:csrc maxLength:150 encoding:NSASCIIStringEncoding];
			if(decodeB64(csrc, cdst, 150) <= 0) goto out;
#ifdef VERBOSE
			NSLog(@"length %d %d", strlen(csrc), strlen(cdst));
#endif
			NSString *mdst = [NSString stringWithCString:cdst encoding:NSUTF8StringEncoding];
#ifdef VERBOSE
			NSLog(@"converted %@", mdst);
#endif
			if(mdst != NULL){
				modified ++;
				dst = [dst stringByAppendingString:mdst];
			}
#ifdef VERBOSE
			NSLog(@"dst %@", dst);
#endif
			goto mime_exit;
		}
		NSLog(@"Not supported encodings %@", src);
		goto out;
mime_exit:
#ifdef VERBOSE
		NSLog(@"dst %@", dst);
#endif
		srange = [src rangeOfString:@"=?" options:NSLiteralSearch range:limitrange];
	}
	tmp = [src substringWithRange:limitrange];
#ifdef VERBOSE
	NSLog(@"Outside of ISO-2022 %@", tmp);
#endif
	space = [tmp rangeOfString:@" " ];
	if(space.location == 0 ){
		tmp = [tmp substringFromIndex:space.location];
#ifdef VERBOSE
		NSLog(@"Chop starting space %@", tmp);
#endif
	}
	dst = [dst stringByAppendingString:tmp];
	return dst;
out:
	return NULL;
}

+ (void) load {
	_old_dispositionParameterForKey_IMP = replaceInstanceMethod(@selector(dispositionParameterForKey:), self,
											@selector(fixdispositionParameterForKey:), self);
//	_old_bodyParameterForKey_IMP = replaceInstanceMethod(@selector(bodyParameterForKey:), self,
//																@selector(fixbodyParameterForKey:), self);
#ifdef VERBOSE
	NSLog(@"MIMEfix loaded");
#endif
}

- (id) fixbodyParameterForKey:(id)fp8 {
	NSString *src;
	src = (*_old_bodyParameterForKey_IMP)(self, _cmd, fp8);
#ifdef VERBOSE
	NSLog(@"bodyParameterForKey_IMP %@:%@.", fp8, src);
#endif
	return (*_old_bodyParameterForKey_IMP)(self, _cmd, fp8);
}

- (id) fixdispositionParameterForKey:(id)fp8 {
	NSString *original, *src, *dst /*, *fallback */;
	NSRange space;
	BOOL modified = NO;
	NSString *ext;
	BOOL prefername = NO;
#if 1
	src = (*_old_dispositionParameterForKey_IMP)(self, _cmd, fp8);
	if(src == NULL)
		return NULL;
#endif
	if([filename caseInsensitiveCompare:(NSString *)fp8] != NSOrderedSame){
			return  (*_old_dispositionParameterForKey_IMP)(self, _cmd, fp8);
	}
	if([[NSUserDefaults standardUserDefaults] boolForKey:@"MIMEfixEnable"] == NO){
//			NSLog(@"NSUserDefaults is disabled, to skip it");
			return  (*_old_dispositionParameterForKey_IMP)(self, _cmd, fp8);
	}else{
//			NSLog(@"NSUserDefaults is enabled, try to interpret it.");
	}
	if([[NSUserDefaults standardUserDefaults] boolForKey:@"MIMEfixPreferName"] == YES){
		prefername = YES;
	}
#if 1
	original = src;
#else
	original = (*_old_dispositionParameterForKey_IMP)(self, _cmd, fp8);
	if(original == NULL){
		return NULL;
	}
#endif
	src = original;
#ifdef VERBOSE
	NSLog(@"Keys %@.", fp8);
	NSLog(@"bodyParameters %@.", [self bodyParameterKeys]);
	NSLog(@"bodyParameterForKey %@.", [self bodyParameterForKey:@"name"]);	
	NSLog(@"DispositionParameters %@.", [self dispositionParameterKeys]);
	NSLog(@"DispositionParameterForKey %@:%@.", fp8, src);
	NSLog(@"MIME type/sub-type:%@/%@.", [self type], [self subtype]);
#endif
	if(prefername == YES){
		src = [self bodyParameterForKey:@"name"];
	}
	if(src == NULL)
		return NULL;
	
	dst = [self fixFilenamme:src];
//	NSLog(@"dst %@", dst);
	space = [dst rangeOfString:@"@" options:NSBackwardsSearch];
	if(prefername == YES){
		modified = YES;
	}else if(dst != NULL && space.location != ([dst length] - 1)){
		modified = YES;
	}else if((dst = [self bodyParameterForKey:@"name"]) != NULL){
		space = [dst rangeOfString:@"@" options:NSBackwardsSearch];
		if(space.location != [dst length] - 1){
			modified = YES;
		}
	}

	if(modified == YES){
		NSString *oext = NULL;
		UniCharCount c;
		unichar buf[512];
		FSRef fsRef;
		CFURLRef cfurlRef;
		if([dst length] > 512) goto out;
		[dst getCharacters:buf range:NSMakeRange(0, [dst length])];
		LSGetExtensionInfo([dst length], buf, &c);
		if (c!= kLSInvalidExtensionIndex){
			oext = [dst substringFromIndex:c];
		}
		if(c == kLSInvalidExtensionIndex ||
			kLSApplicationNotFoundErr == LSGetApplicationForInfo(kLSUnknownType, kLSUnknownCreator, (CFStringRef)oext, kLSRolesAll, &fsRef, &cfurlRef)){
			ext = [self guessFileExtention];
			if(ext != NULL){
				dst = [dst stringByAppendingString:@"."];
				dst = [dst stringByAppendingString:ext];
			}
		}
//		if(src != NULL && [src compare:dst] != NSOrderedSame){
		if(dst != NULL && [dst compare:original] != NSOrderedSame){
			NSLog(@"Filename is updated \"%@\" to \"%@\".", original, dst);
			[self setDispositionParameter:dst forKey:fp8];
		}
	}
out:
	return(*_old_dispositionParameterForKey_IMP)(self, _cmd, fp8);
}

- (NSString *) guessFileExtention
{
	NSString *mimeType = [NSString stringWithFormat:@"%@/%@", [self type], [self subtype]];
//	CFArrayRef UTIArray = UTTypeCreateAllIdentifiersForTag(kUTTagClassMIMEType, (CFStringRef)mimeType, NULL);
	CFStringRef UTIType = UTTypeCreatePreferredIdentifierForTag(kUTTagClassMIMEType, (CFStringRef)mimeType, NULL);
	if(UTIType != NULL){
		NSString *ext = (NSString *)UTTypeCopyPreferredTagWithClass(UTIType, kUTTagClassFilenameExtension);
//		NSLog(@"%d %@, %@, %@",
//			CFArrayGetCount(UTIArray),
//			(NSString *)UTTypeCopyPreferredTagWithClass(UTIType, kUTTagClassFilenameExtension),
//			(NSString *)UTTypeCopyPreferredTagWithClass(UTIType, kUTTagClassMIMEType),
//			(NSString *)UTTypeCopyPreferredTagWithClass(UTIType, kUTTagClassNSPboardType),
//			(NSString *)UTTypeCopyPreferredTagWithClass(UTIType, kUTTagClassOSType));
		if(ext == NULL){
			if([mimeType caseInsensitiveCompare:@"application/msword"] ==  NSOrderedSame){
				ext = @"doc";
			}
			if([mimeType caseInsensitiveCompare:@"application/vnd.ms-excel"] ==  NSOrderedSame){			
				ext = @"xls";
			}
			if([mimeType caseInsensitiveCompare:@"application/x-msexcel"] ==  NSOrderedSame){			
				ext = @"xls";
			}
			if([mimeType caseInsensitiveCompare:@"application/vnd.ms-powerpoint"] ==  NSOrderedSame){			
				ext = @"ppt";
			}
		}
//		NSLog(@"mimeType:Extention %@:%@", mimeType, ext);
		return(ext);
	}
	return NULL;
}
@end