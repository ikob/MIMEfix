/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class Account;

@interface AccountSetupEnabler : NSObject
{
    Account *_account;
}

+ (id)enablerForAccount:(id)fp8;
+ (BOOL)canHandleHostname:(id)fp8;
- (id)initWithAccount:(id)fp8;
- (void)dealloc;
- (void)synchronouslyEnable;

@end

