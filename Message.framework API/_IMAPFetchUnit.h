/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAPFetchResult, NSString;

@interface _IMAPFetchUnit : NSObject
{
    unsigned int uid;
    NSString *fetchItem;
    IMAPFetchResult *_expectedFetchResult;
}

- (void)dealloc;
- (void)_setupExpectedFetchResult;
- (BOOL)matchesFetchResponse:(id)fp8;
- (id)createFailedFetchResponse;

@end

