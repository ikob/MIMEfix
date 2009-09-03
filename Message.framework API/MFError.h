/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSAlertDelegate-Protocol.h"

@class NSMutableDictionary;

@interface MFError <NSAlertDelegate>
{
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 helpTag:(id)arg5 userInfo:(id)arg6;
+ (id)errorWithException:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfo;
- (id)localizedDescription;
- (id)moreInfo;
- (id)helpAnchor;
- (id)shortDescription;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMoreInfo:(id)arg1;
- (void)setHelpTag:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)useGenericDescription:(id)arg1;
- (BOOL)alertShowHelp:(id)arg1;
- (void)dealloc;

@end

