/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString;

@interface LDAPServer : NSObject
{
    NSString *_searchBase;
    NSString *_serverAddress;
    NSNumber *_port;
    NSString *_entryName;
    NSNumber *_enabled;
    NSString *_uid;
    int _scope;
}

- (id)initWithDescription:(id)arg1 serverAddress:(id)arg2 searchBase:(id)arg3 enabled:(id)arg4 port:(int)arg5 scope:(int)arg6 uid:(id)arg7;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)objectSpecifier;
- (id)serverAddress;
- (void)setServerAddress:(id)arg1;
- (id)searchBase;
- (void)setSearchBase:(id)arg1;
- (id)entryName;
- (void)setEntryName:(id)arg1;
- (BOOL)oldIsActive;
- (void)setOldIsActive:(BOOL)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (id)uid;
- (id)port;
- (void)setPort:(id)arg1;
- (int)scope;
- (void)setScope:(int)arg1;
- (int)scopeForInt:(int)arg1;
- (int)intForScope:(int)arg1;
- (void)_updateLDAPServers;

@end

