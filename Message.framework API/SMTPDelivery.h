/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MailDelivery.h>

@class SMTPConnection;

@interface SMTPDelivery : MailDelivery
{
    SMTPConnection *_connection;
}

- (Class)deliveryClass;
- (int)deliverMessageHeaderData:(id)fp8 bodyData:(id)fp12 toRecipients:(id)fp16;

@end

