/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/ToDoDifferenceAnalyzer.h>

@interface ToDoDifferenceAnalyzer (Internal)
- (void)_populateTableWithDifferences:(id)arg1 sourceType:(int)arg2;
- (void)_insertDifference:(id)arg1 differenceType:(int)arg2 sourceType:(int)arg3;
- (void)_addNonConflictOperationFromExpressionResult:(id)arg1;
- (int)_determineConflictHandlingMode:(unsigned long long)arg1;
- (void)_processConflicts:(id)arg1;
@end

