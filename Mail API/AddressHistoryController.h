/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSButton, NSImage, NSMutableArray, NSSearchField, NSString, NSTableView, NSWindow;

@interface AddressHistoryController : NSObject
{
    NSTableView *historyTableView;
    NSButton *addToAddressBookButton;
    NSWindow *window;
    NSSearchField *searchField;
    NSMutableArray *historyRecords;
    NSString *sortColumn;
    BOOL sortIsAscending;
    NSImage *sortAscendingImage;
    NSImage *sortDescendingImage;
    NSImage *addressBookPersonImage;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)showAddressHistory;
- (void)addToAddressBook:(id)fp8;
- (void)deleteFromHistory:(id)fp8;
- (void)search:(id)fp8;
- (void)cancelSearch:(id)fp8;
- (void)windowWillClose:(id)fp8;
- (void)openAddressBook:(id)fp8;
- (int)numberOfRowsInTableView:(id)fp8;
- (id)tableView:(id)fp8 objectValueForTableColumn:(id)fp12 row:(int)fp16;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forTableColumn:(id)fp16 row:(int)fp20;
- (void)tableViewSelectionDidChange:(id)fp8;
- (void)tableView:(id)fp8 didClickTableColumn:(id)fp12;
- (void)sortHistory;
- (void)showColumnSortIndicator;
- (id)tableView:(id)fp8 toolTipForCell:(id)fp12 rect:(struct _NSRect *)fp16 tableColumn:(id)fp20 row:(int)fp24 mouseLocation:(struct _NSPoint)fp28;

@end

