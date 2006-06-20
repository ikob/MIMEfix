/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@interface ObjectCache : NSObject
{
    unsigned int _arrayCapacity;
    struct __CFArray *_keysAndValues;
    BOOL _useIsEqual;
}

- (id)initWithCapacity:(unsigned int)fp8;
- (void)dealloc;
- (void)finalize;
- (void)setCapacity:(unsigned int)fp8;
- (void)setUsesIsEqualForComparison:(BOOL)fp8;
- (void)setObject:(id)fp8 forKey:(id)fp12;
- (id)objectForKey:(id)fp8;
- (void)removeObjectForKey:(id)fp8;
- (void)removeAllObjects;
- (BOOL)isObjectInCache:(id)fp8;

@end

