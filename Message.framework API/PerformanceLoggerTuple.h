/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PerformanceLoggerTuple : NSObject
{
    double _number;
    NSString *_identifier;
}

- (id)initWithNumber:(double)arg1 identifier:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property double number; // @synthesize number=_number;

@end

