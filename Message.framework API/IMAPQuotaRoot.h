/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, QuotaUsage;

@interface IMAPQuotaRoot : NSObject
{
    NSString *_name;
    QuotaUsage *_usage;
}

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)setUsageFromResponse:(id)arg1;
- (id)description;
@property(retain) QuotaUsage *usage; // @synthesize usage=_usage;
@property(copy) NSString *name; // @synthesize name=_name;

@end

