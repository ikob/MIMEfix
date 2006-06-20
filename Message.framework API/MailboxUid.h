/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MailboxUid : NSObject
{
    NSString *uniqueId;
    id _accountOrPathComponent;
    unsigned int _attributes;
    void *_tree;
    NSString *pendingNameChange;
    BOOL isSmartMailbox;
    NSMutableArray *criteria;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    unsigned int _numberOfGenericChildren;
    BOOL failedToOpen;
    NSString *openFailureMessage;
}

+ (id)smartMailboxUids;
+ (void)setSmartMailboxUids:(id)fp8;
+ (id)_smartMailboxWithIdentifier:(id)fp8 inArray:(id)fp12;
+ (id)smartMailboxWithIdentifier:(id)fp8;
+ (id)smartMailboxesEnumerator;
+ (id)specialMailboxUids;
+ (void)setShouldIndexTrash:(BOOL)fp8;
+ (void)reimportJunk;
+ (void)setShouldIndexJunk:(BOOL)fp8;
- (BOOL)isSmartMailbox;
- (void)setIsSmartMailbox:(BOOL)fp8;
- (BOOL)isFlaggedSmartMailbox;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithAccount:(id)fp8;
- (id)initWithName:(id)fp8 attributes:(unsigned int)fp12 forAccount:(id)fp16;
- (id)initWithMailboxUid:(id)fp8;
- (id)initWithDictionaryRepresentation:(id)fp8;
- (id)dictionaryRepresentation;
- (id)uniqueId;
- (id)displayName;
- (void)setPendingNameChange:(id)fp8;
- (id)name;
- (void)setName:(id)fp8;
- (unsigned int)attributes;
- (void)setAttributes:(unsigned int)fp8;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)fp8;
- (BOOL)hasChildren;
- (void)invalidateCachedNumberOfGenericChildren;
- (unsigned int)numberOfGenericChildren;
- (unsigned int)numberOfChildren;
- (id)childAtIndex:(unsigned int)fp8;
- (unsigned int)indexOfChild:(id)fp8;
- (id)childWithName:(id)fp8;
- (id)mutableCopyOfChildren;
- (void)_deleteChildrenWithURLsIfInvalid:(id)fp8 fullPaths:(id)fp12;
- (BOOL)setChildren:(id)fp8;
- (void)sortChildren;
- (id)parent;
- (void)setParent:(id)fp8;
- (void)flushCriteria;
- (id)deepCopy;
- (void)setRepresentedAccount:(id)fp8;
- (id)representedAccount;
- (id)account;
- (id)applescriptAccount;
- (BOOL)isValid;
- (void)invalidate;
- (BOOL)isContainer;
- (BOOL)isStore;
- (BOOL)isSpecialMailboxUid;
- (id)accountRelativePath;
- (id)fullPathNonNil;
- (id)fullPath;
- (id)realFullPath;
- (id)tildeAbbreviatedPath;
- (id)pathRelativeToMailbox:(id)fp8;
- (id)URL;
- (id)URLStringWithAccount:(id)fp8;
- (id)oldURLString;
- (id)URLString;
- (int)compareWithMailboxUid:(id)fp8;
- (int)indexToInsertChildMailboxUid:(id)fp8;
- (BOOL)isDescendantOfMailbox:(id)fp8;
- (id)depthFirstEnumerator;
- (id)description;
- (int)type;
- (void)setType:(int)fp8;
- (BOOL)isIndexable;
- (void)writeIndexFlagFileIfNeeded;
- (void)removeIndexFlagFileIfNeeded;
- (id)_loadUserInfo;
- (id)userInfoObjectForKey:(id)fp8;
- (void)setUserInfoObject:(id)fp8 forKey:(id)fp12;
- (BOOL)userInfoBoolForKey:(id)fp8;
- (void)setUserInfoBool:(BOOL)fp8 forKey:(id)fp12;
- (void)saveUserInfo;
- (id)userInfoDictionary;
- (void)setUserInfoWithDictionary:(id)fp8;
- (id)userInfo;
- (id)ancestralAccount;
- (id)criteria;
- (id)criterion;
- (void)setCriteria:(id)fp8;
- (id)abGroupsUsedInCriteria;
- (BOOL)criteriaAreValid:(id *)fp8;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)fp8;
- (void)addressBookDidChange:(id)fp8;
- (id)store;
- (BOOL)failedToOpen;
- (id)openFailureMessage;
- (void)setFailedToOpen:(BOOL)fp8 message:(id)fp12;
- (id)copyWithZone:(id)fp8;

@end

