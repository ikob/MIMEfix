/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@interface (null) (MimeDataEncoding)
+ (unsigned long long)quotedPrintableLengthOfHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)decodeQuotedPrintableForText:(BOOL)arg1;
- (id)encodeQuotedPrintableForText:(BOOL)arg1;
- (id)encodeQuotedPrintableForText:(BOOL)arg1 allowCancel:(BOOL)arg2;
- (id)decodeBase64;
- (BOOL)isValidBase64Data;
- (id)encodeBase64WithoutLineBreaks;
- (id)encodeBase64;
- (id)encodeBase64AllowCancel:(BOOL)arg1;
- (id)decodeModifiedBase64;
- (id)encodeModifiedBase64;
- (id)encodeBase64HeaderData;
@end
