/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSEntityDescription, NSPersistentStoreCoordinator, NSString;

@interface SeenMessagesStore : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_storePath;
    NSEntityDescription *_accountEntity;
    NSEntityDescription *_seenMessageEntity;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)_configurePersistentStoreCoordinator;
- (id)persistentStoreCoordinator;
- (id)_managedObjectModel;
- (id)seenMessageEntity;
- (void)setSeenMessageEntity:(id)fp8;
- (id)accountEntity;
- (void)setAccountEntity:(id)fp8;
- (id)persistentStorePath;
- (void)setPersistentStorePath:(id)fp8;
- (void)setPersistentStoreCoordinator:(id)fp8;

@end

