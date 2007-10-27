/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface SafeObserver : NSObject
{
    unsigned int _retainCount;
    BOOL _inDealloc;
}

+ (void)initialize;
+ (void)lockSafeObservers;
+ (void)unlockSafeObservers;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)retain;
- (id)willDealloc;
- (void)release;
- (unsigned int)retainCount;

@end

