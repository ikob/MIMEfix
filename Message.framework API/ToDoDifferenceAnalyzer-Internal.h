/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/ToDoDifferenceAnalyzer.h>

@interface ToDoDifferenceAnalyzer (Internal)
- (void)_populateTableWithDifferences:(id)fp8 sourceType:(int)fp12;
- (void)_insertDifference:(id)fp8 differenceType:(int)fp12 sourceType:(int)fp16;
- (void)_addNonConflictOperationFromExpressionResult:(id)fp8;
- (int)_determineConflictHandlingMode:(unsigned int)fp8;
- (void)_processConflicts:(id)fp8;
@end

