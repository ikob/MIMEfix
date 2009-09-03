/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NSMenuDelegate <NSObject>

@optional
- (void)menuNeedsUpdate:(id)arg1;
- (long long)numberOfItemsInMenu:(id)arg1;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuWillOpen:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
@end
