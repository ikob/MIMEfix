/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSTableView.h"

@class NSCell, NSTableColumn;

@interface ToDoListView : NSTableView
{
    int _mouseRow;
    int _mouseCol;
    NSCell *_mouseCell;
    NSTableColumn *focusedTableColumn;
    BOOL _editing;
}

- (id)init;
- (id)initWithCoder:(id)fp8;
- (void)dealloc;
- (void)updateTrackingAreas;
- (id)preparedCellAtColumn:(int)fp8 row:(int)fp12;
- (void)setMouseCell:(id)fp8 row:(int)fp12 column:(int)fp16;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;
- (void)updateCell:(id)fp8;
- (id)mouseCell;
- (int)mouseRow;
- (int)mouseColumn;
- (void)keyDown:(id)fp8;
- (void)showTableColumnsFromArray:(id)fp8 allColumns:(id)fp12;
- (id)menuForEvent:(id)fp8;
- (BOOL)canFocusCell:(id)fp8 atTableColumn:(id)fp12 row:(int)fp16;
- (id)focusedTableColumn;

@end

