/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSMutableDictionary, NSString;

@interface UsageCounter
{
    NSString *_name;
    NSMutableDictionary *_counts;
    BOOL _isDirty;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (BOOL)gatherJunkMailUsageCounts;
+ (void)setGatherJunkMailUsageCounts:(BOOL)arg1;
- (id)initWithName:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)_dictionaryForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)saveDefaults;
- (unsigned long long)numberOfDaysAvailableForKey:(id)arg1;
- (unsigned long long)countForKey:(id)arg1;
- (unsigned long long)countForKey:(id)arg1 includeToday:(BOOL)arg2;
- (void)removeCountForKey:(id)arg1;
- (void)incrementCountForKey:(id)arg1;
- (void)incrementCountForKey:(id)arg1 byCount:(unsigned long long)arg2;

@end

