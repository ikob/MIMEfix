/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/Criterion.h>

@interface ToDoCriterion : Criterion
{
}

+ (id)stringForCriterionType:(int)fp8;
+ (int)criterionTypeForString:(id)fp8;
- (BOOL)hasExpression;
- (BOOL)allowsEmptyExpression;
- (BOOL)isValid:(id *)fp8 options:(unsigned long)fp12;

@end

