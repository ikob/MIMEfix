/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMessageSortingInterface-Protocol.h"
#import "NSCopying-Protocol.h"

@class MFUUID, MessageStore, NSArray, NSData, NSIndexSet, NSString;

@interface Message : NSObject <NSCopying, MFMessageSortingInterface>
{
    double _dateSentInterval;
    double _dateReceivedInterval;
    double _dateLastViewedInterval;
    long long _mf_retainCount;
    MessageStore *_store;
    NSString *_senderAddressComment;
    NSString *_subject;
    NSArray *_toRecipients;
    NSString *_sender;
    NSArray *_authors;
    NSData *_messageIDHeaderDigest;
    NSData *_inReplyToHeaderDigest;
    MFUUID *_documentID;
    unsigned int _messageFlags;
    CDStruct_accefccd _flags;
    unsigned int _preferredEncoding;
    BOOL _type;
    unsigned char _subjectPrefixLength;
    BOOL _recipientType;
}

+ (void)initialize;
+ (id)messageWithRFC822Data:(id)arg1;
+ (id)messageWithRFC822Data:(id)arg1 sanitizeData:(BOOL)arg2;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;
+ (id)descriptionForType:(BOOL)arg1 plural:(BOOL)arg2;
+ (id)messageTypeKeyForMessageType:(BOOL)arg1;
+ (BOOL)_messageTypeForMessageTypeKey:(id)arg1;
+ (id)unreadMessagesFromMessages:(id)arg1;
+ (unsigned char)subjectPrefixLengthUnknown;
+ (BOOL)allMessages:(id)arg1 areSameType:(BOOL)arg2;
+ (BOOL)colorIsSetInMoreFlags:(CDStruct_accefccd)arg1;
+ (unsigned int)validatePriority:(unsigned int)arg1;
+ (unsigned long long)displayablePriorityForPriority:(unsigned int)arg1;
+ (BOOL)isMessageURL:(id)arg1;
+ (id)messageWithURL:(id)arg1;
+ (id)messagesWithURL:(id)arg1;
+ (id)messageWithPersistentID:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (id)messageStore;
- (void)setMessageStore:(id)arg1;
- (BOOL)messageStoreShouldBeSet;
- (id)mailbox;
- (void)cacheBodyAndHeader;
- (void)uncacheBodyAndHeader;
- (id)_cachedHeaders;
- (void)_cacheHeadersIfPossible:(id)arg1;
- (id)_cachedHeaderData;
- (void)_cacheHeaderDataIfPossible:(id)arg1;
- (id)_cachedMessageBody;
- (void)_cacheMessageBodyIfPossible:(id)arg1;
- (id)_cachedMessageBodyData;
- (void)_cacheMessageBodyDataIfPossible:(id)arg1;
- (id)headers;
- (id)headersIfAvailable;
- (BOOL)isKnownToBeNote;
- (BOOL)type;
- (void)setType:(BOOL)arg1;
- (BOOL)isEditable;
- (BOOL)isMessageMeeting;
- (id)documentID;
- (void)setDocumentID:(id)arg1;
- (unsigned int)messageFlags;
- (void)setPrimitiveMessageFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
- (void)setMessageFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
- (id)attachmentNamesIfAvailable;
- (id)messageBody;
- (id)messageBodyIfAvailable;
- (id)messageBodyFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyForIndexingAttachments;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageDataIncludingFromSpace:(BOOL)arg1;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (BOOL)colorHasBeenEvaluated;
- (id)color;
- (int)colorIntValue;
- (int)colorForSort;
- (BOOL)isMarkedForOverwrite;
- (void)setMarkedForOverwrite:(BOOL)arg1;
- (void)setPrimitiveColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setPrimitiveColorHasBeenEvaluated:(BOOL)arg1;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)setPrimitiveColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(unsigned int)arg3 mask:(unsigned int)arg4;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(unsigned int)arg3 mask:(unsigned int)arg4;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)messageSize;
- (id)attributedString;
- (id)preferredEmailAddressToReplyWith;
- (id)messageID;
- (id)messageIDHeaderDigest;
- (void)unlockedSetMessageIDHeaderDigest:(id)arg1;
- (void)setMessageIDHeaderDigest:(id)arg1;
- (id)_messageIDHeaderDigestIvar;
- (id)inReplyToHeaderDigest;
- (BOOL)isReply;
- (void)unlockedSetInReplyToHeaderDigest:(id)arg1;
- (void)setInReplyToHeaderDigest:(id)arg1;
- (id)_inReplyToHeaderDigestIvar;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)isPartialMessageBodyAvailable;
- (id)stringValueRenderMode:(long long)arg1 updateBodyFlags:(BOOL)arg2 junkRecorder:(id)arg3;
- (id)stringForIndexing;
- (id)stringForIndexingUpdatingBodyFlags:(BOOL)arg1;
- (id)stringForJunk;
- (id)stringForJunk:(id)arg1;
- (BOOL)hasCalculatedNumberOfAttachments;
- (unsigned long long)numberOfAttachments;
- (int)junkMailLevel;
- (void)setPriorityFromHeaders:(id)arg1;
- (int)priority;
- (unsigned int)preferredEncoding;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (id)rawSourceFromHeaders:(id)arg1 body:(id)arg2;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (id)_newDateFromReceivedHeadersInHeaders:(id)arg1;
- (id)_newDateFromHeader:(id)arg1 inHeaders:(id)arg2;
- (id)_newDateFromDateHeaderInHeaders:(id)arg1;
- (id)_newDateFromCreatedDateHeaderInHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1 type:(BOOL)arg2;
- (id)subjectAndPrefixLength:(unsigned long long *)arg1;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)subjectAddition;
- (id)subject;
- (id)subjectIfAvailable;
- (void)setSubject:(id)arg1;
- (void)setSubjectPrefixLength:(unsigned char)arg1;
- (BOOL)supportsSnippets;
- (id)dateReceived;
- (id)dateSent;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (id)dateLastViewed;
- (double)dateLastViewedAsTimeIntervalSince1970;
- (id)sender;
- (void)setSender:(id)arg1;
- (id)senderAddressComment;
- (BOOL)senderIsAvailableOnline;
- (id)to;
- (void)setTo:(id)arg1;
- (id)authors;
- (void)setAuthors:(id)arg1;
- (void)setMessageInfo:(id)arg1 subjectPrefixLength:(unsigned char)arg2 to:(id)arg3 sender:(id)arg4 type:(BOOL)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 dateLastViewedTimeIntervalSince1970:(double)arg10;
- (void)setMessageInfoFromMessage:(id)arg1;
- (id)references;
- (id)remoteID;
- (unsigned int)uid;
- (unsigned int)uidForSort;
- (CDStruct_accefccd)moreMessageFlags;
- (id)path;
- (id)account;
- (id)remoteMailboxURL;
- (id)originalMailboxURL;
- (id)_URLFetchIfNotAvailable:(BOOL)arg1;
- (id)URL;
- (id)URLIfAvailable;
- (id)persistentID;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)headerData;
- (id)dataForMimePart:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)spotlightAttributes;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (void)forceSetAttachmentInfoFromBody:(id)arg1;
- (void)setAttachmentInfoFromBody:(id)arg1;
- (void)setAttachmentInfoFromBody:(id)arg1 forced:(BOOL)arg2;
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4;
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4 force:(BOOL)arg5;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
@property BOOL recipientType; // @synthesize recipientType=_recipientType;
@property double primitiveDateLastViewedInterval; // @synthesize primitiveDateLastViewedInterval=_dateLastViewedInterval;
@property double primitiveDateReceivedInterval; // @synthesize primitiveDateReceivedInterval=_dateReceivedInterval;
@property double primitiveDateSentInterval; // @synthesize primitiveDateSentInterval=_dateSentInterval;
@property BOOL primitiveMessageType; // @synthesize primitiveMessageType=_type;
- (id)backupID;
- (id)objectSpecifier;
- (void)_setAppleScriptFlag:(id)arg1 state:(BOOL)arg2;
- (BOOL)isRead;
- (void)setIsRead:(BOOL)arg1;
- (BOOL)wasRepliedTo;
- (void)setWasRepliedTo:(BOOL)arg1;
- (BOOL)wasForwarded;
- (void)setWasForwarded:(BOOL)arg1;
- (BOOL)wasRedirected;
- (void)setWasRedirected:(BOOL)arg1;
- (BOOL)isJunk;
- (void)setIsJunk:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (BOOL)isFlagged;
- (void)setIsFlagged:(BOOL)arg1;
- (long long)flaggedStatus;
- (void)setFlaggedStatus:(long long)arg1;
- (id)replyTo;
- (id)scriptedMessageSize;
- (id)content;
- (id)_performBackgroundGetContent;
- (void)_addRecipientsForKey:(id)arg1 toArray:(id)arg2;
- (id)recipients;
- (id)toRecipients;
- (id)ccRecipients;
- (id)bccRecipients;
- (id)container;
- (void)setContainer:(id)arg1;
- (void)_performBackgroundSetContainer:(id)arg1 command:(id)arg2;
- (id)messageIDHeader;
- (id)rawSource;
- (id)allHeaders;
- (int)actionColorMessage;
- (int)backgroundColor;
- (void)setBackgroundColor:(int)arg1;
- (id)appleScriptHeaders;
- (id)appleScriptAttachments;
- (id)valueInAppleScriptAttachmentsWithUniqueID:(id)arg1;
- (void)renderHeaders:(id)arg1;
- (void)renderBody:(id)arg1;
- (void)renderString:(id)arg1;
@property(readonly) BOOL isThread;
@property(readonly) BOOL containsOnlyNotes;
@property(readonly) BOOL shouldUseSubjectForThreading;
@property(readonly) long long conversationID;
@property(readonly) NSIndexSet *appliedFlagColors;
- (BOOL)isParentResponseMessage:(char *)arg1 isRejected:(char *)arg2 requestedAddresses:(id)arg3 requestIsForSenders:(char *)arg4;
- (BOOL)isChildRequestMessage:(id)arg1 requestIsForSenders:(char *)arg2 childAddress:(id *)arg3 permissionRequestState:(int *)arg4;
- (BOOL)isChildRequestMessage;

@end

