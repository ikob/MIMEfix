/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class MessageCriterion, NSHashTable, NSString;

@interface _MatadorResultCollector : NSObject
{
    MessageCriterion *_criterion;
    MessageCriterion *_resultParent;
    NSString *_expression;
    id <MessageConsumer> _target;
    struct __MDQuery *_query;
    NSHashTable *_seenItems;
    unsigned int _options;
}

- (id)initWithCriterion:(id)arg1 resultParentCriterion:(id)arg2 target:(id)arg3 query:(struct __MDQuery *)arg4 expression:(id)arg5;
- (void)dealloc;
- (void)finalize;
- (struct __MDQuery *)query;
- (void)setQuery:(struct __MDQuery *)arg1;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) NSHashTable *seenItems; // @synthesize seenItems=_seenItems;
@property(retain, nonatomic) id <MessageConsumer> target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(retain, nonatomic) MessageCriterion *resultParent; // @synthesize resultParent=_resultParent;
@property(retain, nonatomic) MessageCriterion *criterion; // @synthesize criterion=_criterion;

@end

