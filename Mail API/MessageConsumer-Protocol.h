/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MessageConsumer <NSObject>
- (void)newMessagesAvailable:(id)arg1;
- (void)newMessagesAvailable:(id)arg1 ranks:(id)arg2;
- (BOOL)shouldCancel;
@end

