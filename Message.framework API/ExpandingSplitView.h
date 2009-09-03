/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSImage, NSString;

@interface ExpandingSplitView
{
    long long dividerToolTipTag;
    NSString *toolTipString;
    NSImage *splitterDimple;
    NSImage *splitterBackground;
    double _dividerThickness;
    int _dividerType;
}

- (void)dealloc;
- (int)dividerType;
- (void)setDividerType:(int)arg1;
- (double)getSplitPercentage;
- (BOOL)_isSubviewAtIndexVisible:(unsigned long long)arg1;
- (BOOL)isSecondViewVisible;
- (BOOL)isFirstViewVisible;
- (void)resizeSubviewsToPercentage:(double)arg1;
- (void)setDividerToolTip:(id)arg1;
- (double)dividerThickness;
- (struct CGRect)_dividerRect;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (id)accessibilityAttributeValue:(id)arg1;

@end

