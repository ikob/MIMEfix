/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSArray, NSDictionary;

@interface MessageListColumnManager
{
    BOOL blockSavingColumnPreferences;
    NSArray *tableColumns;
    NSDictionary *viewerPreferences;
}

+ (id)sharedManager;
+ (void)setSharedManager:(id)arg1;
- (id)initWithTableColumns:(id)arg1 viewerPreferences:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)dealloc;
- (void)saveColumnPreferencesToDefaults:(id)arg1;
- (void)takeDefaultsForMailboxes:(id)arg1 isThreaded:(BOOL)arg2 isSearching:(BOOL)arg3 searchTarget:(int)arg4 fromCurrentColumnsInTableView:(id)arg5;
- (id)tableColumnPreferencesForMailboxType:(id)arg1;
- (long long)widthAndPosition:(long long *)arg1 forColumn:(id)arg2 inTableView:(id)arg3 mailboxes:(id)arg4 isThreaded:(BOOL)arg5 isSearching:(BOOL)arg6;
- (long long)widthAndPosition:(long long *)arg1 forColumn:(id)arg2 mailboxes:(id)arg3 isThreaded:(BOOL)arg4 isSearching:(BOOL)arg5 locationIsVisible:(BOOL)arg6 rankIsVisible:(BOOL)arg7;
- (id)convertNormalSettingsFromPreleopardDefaults;
- (void)replaceColumn:(long long)arg1 byColumn:(long long)arg2 inSettings:(id)arg3;
- (void)setColumn:(long long)arg1 isVisible:(BOOL)arg2 inSettings:(id)arg3;
- (id)visibleTableColumnSettingsForMailboxes:(id)arg1 multipleMailboxes:(BOOL)arg2 ofType:(id)arg3 withLastViewedDate:(BOOL)arg4 isThreaded:(BOOL)arg5 isSearching:(BOOL)arg6 searchTarget:(int)arg7 searchField:(int)arg8 tableView:(id)arg9;
- (id)typeOfMailboxes:(id)arg1 multiple:(char *)arg2;
- (id)widthKeyForMailboxType:(id)arg1 isThreaded:(BOOL)arg2 isSearching:(BOOL)arg3 locationIsVisible:(BOOL)arg4 rankIsVisible:(BOOL)arg5;
- (BOOL)columnsList:(id)arg1 containsColumn:(long long)arg2;
- (BOOL)column:(id)arg1 isAnAutomaticInsertColumnForMailboxType:(id)arg2 mailboxes:(id)arg3 multipleMailboxes:(BOOL)arg4 isSearching:(BOOL)arg5 searchTarget:(int)arg6 searchField:(int)arg7;
- (BOOL)someMailboxUsesLastViewedDateCriterion:(id)arg1;
- (void)showColumnsInTableView:(id)arg1 allColumns:(id)arg2 forMailboxes:(id)arg3 isThreaded:(BOOL)arg4 threadingHasChanged:(BOOL)arg5;
- (void)showColumnsInTableView:(id)arg1 allColumns:(id)arg2 forSearchTarget:(int)arg3 searchField:(int)arg4 mailboxes:(id)arg5 isThreaded:(BOOL)arg6;
- (void)sizeColumnsToFitInTableView:(id)arg1 forMailboxes:(id)arg2 isThreaded:(BOOL)arg3 threadingDidChange:(BOOL)arg4;
- (void)column:(id)arg1 wasMadeVisible:(BOOL)arg2 inTableView:(id)arg3 forMailboxes:(id)arg4 isSearching:(BOOL)arg5 searchTarget:(int)arg6 searchField:(int)arg7;
- (long long)calcUnreadColumnWidth:(id)arg1 forUnreadCountString:(id)arg2;
- (void)setUpUnreadColumnMinWidth:(id)arg1 isThreaded:(BOOL)arg2;
- (void)setupUnreadColumnWidthInTableView:(id)arg1 forMailboxes:(id)arg2 isThreaded:(BOOL)arg3;

@end

