/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface _MFFlagCheckInfo : NSObject
{
    double _firstCountDifferenceTime;
    double _lastCheckAllowedTime;
    BOOL _hadCountDifference;
}

- (id)init;
- (double)timeSinceFirstCountDifference;
- (double)timeSinceLastCheckAllowed;
- (BOOL)hasAllowedCheckAfterCountDifference;
- (BOOL)hadCountDifference;
- (void)setHadCountDifference;
- (void)resetAfterFullCheck:(BOOL)arg1;

@end

