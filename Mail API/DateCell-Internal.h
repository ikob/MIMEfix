/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "DateCell.h"

@interface DateCell (Internal)
- (void)_dateCellCommonInit;
- (void)_initDateFormatter;
- (void)setLastFont:(id)arg1;
- (double)_widthOfStringWithTimeFormat:(id)arg1 withDatePrefix:(id)arg2;
- (double)_widthOfLongestDateStringWithLevel:(int)arg1 format:(id)arg2;
- (void)_saveWidthsToDefaults;
- (BOOL)_readWidthsFromDefaults;
- (void)_updateDateColumnDetailLevelWidths;
- (void)_updateDateColumnDetailLevels;
@end

