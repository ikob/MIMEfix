/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/RemoteMessage.h>

@class MessageHeaders, NSData, NSString;

@interface EWSMessage : RemoteMessage
{
    NSString *_itemId;
    NSString *_changeKey;
    NSData *_bodyData;
    NSData *_headerData;
    MessageHeaders *_headers;
    long long _libraryID;
}

@property long long libraryID; // @synthesize libraryID=_libraryID;
// Preceeding property had unknown attributes: N
// Original attribute string: Tq,N,V_libraryID

@property(retain) MessageHeaders *headers; // @synthesize headers=_headers;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"MessageHeaders",&,V_headers,P

@property(retain) NSData *headerData; // @synthesize headerData=_headerData;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSData",&,V_headerData,P

@property(retain) NSData *fetchedBodyData; // @synthesize fetchedBodyData=_bodyData;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSData",&,V_bodyData,P

@property(copy) NSString *changeKey; // @synthesize changeKey=_changeKey;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_changeKey,P

@property(copy) NSString *itemId; // @synthesize itemId=_itemId;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_itemId,P


+ (void)initialize;
+ (BOOL)messageTypeForEWSItemClass:(id)arg1;
+ (id)EWSItemClassForMessageType:(BOOL)arg1;
+ (id)EWSFolderClassForMailboxType:(int)arg1;
+ (id)headersItemShape;
+ (void)parseExtendedFieldsFromEWSMessage:(id)arg1 intoFlags:(unsigned int *)arg2 flagsMask:(unsigned int *)arg3 messageID:(id *)arg4 headers:(id *)arg5;
+ (void)_extendedPropertiesFromEWSItem:(id)arg1 statusFlags:(int *)arg2 messageFlags:(int *)arg3 flagStatus:(int *)arg4 toDoFlags:(int *)arg5 replyFlags:(int *)arg6 hasAttachments:(char *)arg7 customFlags:(id)arg8 messageID:(id *)arg9 headers:(id *)arg10;
+ (id)extendedFieldsForEWSNoteType;
+ (id)fieldsToMaintainWhenUpdatingMessageType:(BOOL)arg1;
+ (id)extendedFieldsForEWSMeetingMessageType;
+ (id)extendedFieldsForEWSMeetingRequestMessageType;
+ (id)extendedFieldsForEWSCalendarType;
+ (id)propertiesToGetBeforeUpdatingMessageFlags:(id)arg1 forMessageType:(BOOL)arg2 includesReadReceipts:(char *)arg3;
+ (id)updatesForEWSItem:(id)arg1 applyingFlags:(id)arg2;
+ (id)_extendedFieldsForFlags:(unsigned int)arg1 importance:(int *)arg2;
+ (id)_createEWSExtendedPropertyWithTag:(id)arg1 intValue:(int)arg2;
+ (id)_createCustomEWSExtendedPropertyWithName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)_createEWSSetItemWithPropertyTag:(id)arg1 intValue:(int)arg2;
+ (id)_createCustomEWSSetItemWithPropertyName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)dataFromMimeContent:(id)arg1;
+ (id)_mimeContentForData:(id)arg1;
+ (id)createEWSItemFromMessage:(id)arg1 data:(id)arg2 flags:(unsigned int)arg3 sender:(id)arg4 recipientsByHeaderKey:(id)arg5 categories:(id)arg6 existingProperties:(id)arg7;
+ (id)EWSItemIdTypesForMessages:(id)arg1;
+ (id)EWSItemIdStringsForItemIdTypes:(id)arg1;
+ (id)EWSItemIdTypesForItemIdStrings:(id)arg1;
+ (id)_createEWSHeaderFieldsForMessageHeaders:(id)arg1 encodingHint:(unsigned int)arg2;
+ (id)_createEWSAddressForAddress:(id)arg1;
+ (id)_createEWSAddressesForAddresses:(id)arg1;
- (id)initWithItemId:(id)arg1 changeKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)remoteID;
- (BOOL)isEditable;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setHeaderAndBodyFromFullData:(id)arg1;
- (long long)libraryID;
- (void)setLibraryID:(long long)arg1;
- (id)headers;
- (void)setHeaders:(id)arg1;
- (id)headerData;
- (void)setHeaderData:(id)arg1;
- (id)fetchedBodyData;
- (void)setFetchedBodyData:(id)arg1;
- (id)changeKey;
- (void)setChangeKey:(id)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;

@end

