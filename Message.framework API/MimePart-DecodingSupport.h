/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/MimePart.h>

@interface MimePart (DecodingSupport)
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)decode;
- (id)decodeTextPlain;
- (id)decodeText;
- (id)decodeTextRichtext;
- (id)decodeTextRtf;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)decodeTextCalendar;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;
- (id)decodeMultipartFolder;
- (id)decodeApplicationApple_msg_composite_image;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (id)decodeApplicationSmil;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageRfc822;
- (id)decodeMessagePartial;
- (id)decodeMessageExternal_body;
- (id)decodeApplicationMac_binhex40;
- (id)decodeApplicationApplefile;
- (id)decodeMultipartAppledouble;
@end

