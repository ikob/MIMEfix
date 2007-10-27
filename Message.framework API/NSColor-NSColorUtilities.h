/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSColor.h"

@interface NSColor (NSColorUtilities)
+ (id)allQuotingColors;
+ (id)defaultQuotingColors;
+ (id)allHighlightColors;
+ (int)highlightColorValueForColor:(id)fp8;
+ (id)colorForHighlightColorValue:(int)fp8;
+ (id)colorPlist;
+ (int)intWithIdentifierColor:(id)fp8;
+ (id)identifierForColor:(id)fp8;
+ (id)colorForIdentifier:(id)fp8;
+ (id)colorForEnrichedValue:(id)fp8;
+ (void)_configureColorMenuForBoneHeadClients:(id)fp8;
+ (void)configureColorMenu:(id)fp8;
+ (id)createSwatchForColor:(id)fp8;
+ (id)colorWithIntValue:(int)fp8;
+ (id)colorWithHexString:(id)fp8;
+ (void)setThreadBackgroundColor:(id)fp8;
+ (id)lighterThreadBackgroundColor;
+ (void)clearThreadBackgroundColors;
+ (id)threadBackgroundColor;
+ (id)junkMailColor;
+ (id)linkColor;
+ (id)visitedLinkColor;
+ (id)activeLinkColor;
+ (id)splitterColor;
+ (id)subjectAdditionColor;
+ (id)aquaBlueColor;
+ (id)activeAlternateBackgroundColor;
+ (id)inactiveAlternateBackgroundColor;
- (int)intValue;
- (id)hexString;
@end

