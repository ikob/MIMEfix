/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/MimePart.h>

@interface MimePart (DecodingSupport)
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)contentsForTextSystem;
- (id)decodeTextPlain;
- (id)decodeText;
- (id)decodeTextRichtext;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)decodeTextCalendar;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartFolder;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageRfc822;
- (id)decodeMessagePartial;
- (id)decodeMessageExternal_body;
- (id)decodeApplicationMac_binhex40;
- (id)decodeApplicationApplefile;
- (id)decodeMultipartAppledouble;
@end

