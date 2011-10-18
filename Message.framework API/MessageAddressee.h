/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MessageAddressee : NSObject
{
    NSString *_displayName;
    NSString *_address;
    NSString *_type;
    id _message;
}

- (id)initWithDisplayName:(id)arg1 address:(id)arg2 type:(id)arg3 message:(id)arg4;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)formattedAddress;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)_keyForType;
- (id)objectSpecifier;
- (void)setMessage:(id)arg1;

@end

