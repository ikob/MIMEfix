/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/Criterion.h>

@class NSString;

@interface MessageCriterion : Criterion
{
    int _specialMailboxType;
    NSString *_groupUniqueID;
}

+ (void)initialize;
+ (id)messagesInConversationCriterionWithConversationIDs:(id)arg1;
+ (void)_updateAddressComments:(id)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (id)stringForCriterionType:(int)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setCriterionIdentifier:(id)arg1;
- (id)recursiveGroupUniqueIDs;
- (id)_headersRequiredForEvaluation;
- (void)addHeadersRequiredForRoutingToArray:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateBodyCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_doesGroup:(id)arg1 containSender:(id)arg2;
- (BOOL)_evaluateMemberOfGroupCriterion:(id)arg1;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluateMessageTypeCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluateJunkMailHeaders:(id)arg1;
- (BOOL)_evaluateJunkMailCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluateCompoundCriterion:(id)arg1;
- (BOOL)_evaluateFlagCriterion:(id)arg1;
- (BOOL)_evaluateMailboxCriterion:(id)arg1;
- (BOOL)_evaluateSpecialMailboxCriterion:(id)arg1;
- (BOOL)_evaluateFlaggedStatusCriterion:(id)arg1;
- (BOOL)doesMessageSatisfyRuleEvaluationCriterion:(id)arg1;
- (BOOL)_evaluateMessage:(id)arg1;
- (BOOL)evaluateMessage:(id)arg1;
- (BOOL)hasExpression;
- (BOOL)allowsEmptyExpression;
- (BOOL)hasQualifier;
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;
- (BOOL)containsBodyCriterion;
- (id)emailAddressesForGroupCriterion;
- (id)criterionByExpandingGroup;
- (id)criterionByExpandingSpecialMailboxCriterion;
- (BOOL)_containsCriterion:(int)arg1;
- (BOOL)containsLastViewedDateCriterion;
- (BOOL)containsIncludeConversationsCriterion;
- (BOOL)containsMessageIsNotInATrashMailboxCriterion;
- (BOOL)containsRelativeDateCriteria;
- (BOOL)containsAddressBookCriteria;
@property(copy) NSString *groupUniqueID; // @synthesize groupUniqueID=_groupUniqueID;
@property int specialMailboxType; // @synthesize specialMailboxType=_specialMailboxType;
- (id)fixOnceWithExpandedSmartMailboxes:(id)arg1;
- (id)criterionByMergingBodyCriteria;
- (BOOL)hasNumberCriterion;
- (BOOL)isExpressibleInTigerSchema;
- (id)SQLExpressionWithContext:(CDStruct_c53ccb4e *)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3;
- (int)ruleType;
- (void)setRuleType:(int)arg1;
- (id)ruleHeader;
- (void)setRuleHeader:(id)arg1;
- (int)ruleQualifier;
- (void)setRuleQualifier:(int)arg1;
- (id)ruleExpression;
- (void)setRuleExpression:(id)arg1;

@end

