/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class IMAPMailboxes, MailboxUid, NSArray, NSString;

@interface _IMAPMailboxEntry
{
    NSString *_name;
    NSString *_path;
    BOOL _subscribed;
    NSArray *_children;
    NSArray *_filteredChildren;
    MailboxUid *_uid;
    BOOL _isNoSelect;
    BOOL _hasEnabledDescendants;
    _IMAPMailboxEntry *_parent;
    IMAPMailboxes *_controller;
}

@property IMAPMailboxes *_controller; // @synthesize _controller;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"IMAPMailboxes",N,V_controller

@property(retain) _IMAPMailboxEntry *_parent; // @synthesize _parent;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"_IMAPMailboxEntry",&,N,V_parent

@property BOOL _hasEnabledDescendants; // @synthesize _hasEnabledDescendants;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,V_hasEnabledDescendants

@property BOOL _isNoSelect; // @synthesize _isNoSelect;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,V_isNoSelect

@property(retain) MailboxUid *_uid; // @synthesize _uid;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"MailboxUid",&,N,V_uid

@property(retain) NSArray *_filteredChildren; // @synthesize _filteredChildren;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSArray",&,N,V_filteredChildren

@property(retain) NSArray *_children; // @synthesize _children;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSArray",&,N,V_children

@property BOOL _subscribed; // @synthesize _subscribed;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,V_subscribed

@property(retain) NSString *_path; // @synthesize _path;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSString",&,N,V_path

@property(retain) NSString *_name; // @synthesize _name;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSString",&,N,V_name


- (void)dealloc;
- (long long)compare:(id)arg1;
- (id)filteredChildren;
- (BOOL)isPathValidForCurrentFilter;
- (BOOL)isValidForCurrentFilter;
- (id)_controller;
- (void)set_controller:(id)arg1;
- (id)_parent;
- (void)set_parent:(id)arg1;
- (BOOL)_hasEnabledDescendants;
- (void)set_hasEnabledDescendants:(BOOL)arg1;
- (BOOL)_isNoSelect;
- (void)set_isNoSelect:(BOOL)arg1;
- (id)_uid;
- (void)set_uid:(id)arg1;
- (id)_filteredChildren;
- (void)set_filteredChildren:(id)arg1;
- (id)_children;
- (void)set_children:(id)arg1;
- (BOOL)_subscribed;
- (void)set_subscribed:(BOOL)arg1;
- (id)_path;
- (void)set_path:(id)arg1;
- (id)_name;
- (void)set_name:(id)arg1;

@end
