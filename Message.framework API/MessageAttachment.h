/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class MimeBody, MimePart, NSArray, NSData, NSDictionary, NSFileWrapper, NSImage, NSNumber, NSString, NSURL;

@interface MessageAttachment
{
    NSData *_currentData;
    NSFileWrapper *_fileWrapper;
    NSURL *_externalBodyURL;
    id _stationeryCompositeImage;
    NSData *_originalData;
    NSString *_originalFilename;
    BOOL _hasResourceForkData;
    struct CGSize _imageSizeFromHeaders;
    NSImage *_iconImage;
    long long _imageByteCountFromHeaders;
    NSString *_filename;
    NSNumber *_filePermissions;
    NSNumber *_fileSize;
    NSString *_mimeType;
    unsigned int _creator;
    unsigned int _type;
    NSString *_extension;
    BOOL _shouldHideExtension;
    unsigned short _finderFlags;
    NSArray *_whereFroms;
    NSDictionary *_quarantineProperties;
    NSString *_contentID;
    MimeBody *_mimeBody;
    MimePart *_mimePart;
    NSString *_messageID;
    BOOL _isCalendarInvitation;
    NSString *_mailSpecialHandlingType;
    NSString *_filenameForSaving;
    NSString *_savedPath;
    unsigned long long _approximateSize;
}

@property(retain) NSData *originalData;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSData",&,P

@property(retain) MimePart *mimePart;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"MimePart",&,P

@property BOOL isPartOfStationery;
@property(retain) NSFileWrapper *fileWrapper;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSFileWrapper",&,P

@property(retain) NSDictionary *quarantineProperties; // @synthesize quarantineProperties=_quarantineProperties;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSDictionary",&,V_quarantineProperties,P

@property(retain) NSArray *whereFroms; // @synthesize whereFroms=_whereFroms;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSArray",&,V_whereFroms,P

@property(retain) NSString *savedPath; // @synthesize savedPath=_savedPath;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_savedPath,P

@property(readonly) id stationeryCompositeImage; // @synthesize stationeryCompositeImage=_stationeryCompositeImage;
// Preceeding property had unknown attributes: P
// Original attribute string: T@,R,V_stationeryCompositeImage,P

@property(retain) NSString *mailSpecialHandlingType; // @synthesize mailSpecialHandlingType=_mailSpecialHandlingType;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_mailSpecialHandlingType,P

@property BOOL isCalendarInvitation; // @synthesize isCalendarInvitation=_isCalendarInvitation;
@property(retain) NSString *messageID; // @synthesize messageID=_messageID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_messageID,P

@property(retain) NSString *mimeType; // @synthesize mimeType=_mimeType;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_mimeType,P

@property(retain) NSNumber *filePermissions; // @synthesize filePermissions=_filePermissions;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSNumber",&,V_filePermissions,P

@property BOOL shouldHideExtension; // @synthesize shouldHideExtension=_shouldHideExtension;
@property(retain) NSString *extension; // @synthesize extension=_extension;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_extension,P

@property unsigned int creator; // @synthesize creator=_creator;
@property unsigned int type; // @synthesize type=_type;
@property(retain) NSString *contentID; // @synthesize contentID=_contentID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_contentID,P

@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSNumber",&,V_fileSize,P

@property(readonly, retain) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",R,&,V_originalFilename,P

@property(retain) NSString *filename; // @synthesize filename=_filename;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,V_filename,P

@property(retain) NSURL *externalBodyURL; // @synthesize externalBodyURL=_externalBodyURL;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSURL",&,V_externalBodyURL,P

@property(retain) NSData *currentData; // @synthesize currentData=_currentData;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSData",&,V_currentData,P


- (id)initWithData:(id)arg1;
- (id)initWithMailInternalData:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithExternalBodyURL:(id)arg1;
- (id)initWithStationeryCompositeImage:(id)arg1;
- (void)dealloc;
- (id)attachmentWithCurrentData;
- (id)originalData;
- (void)setOriginalData:(id)arg1;
- (void)setCurrentData:(id)arg1;
- (BOOL)isScalable;
- (void)setDataForResizedImage:(id)arg1;
- (void)revertToOriginalData;
- (BOOL)isFullSize;
- (void)setFileNameForResizedImage:(id)arg1;
- (void)setMimePart:(id)arg1;
- (id)mimePart;
- (void)_configureWithMimePart;
- (void)takeInfoFromMessageAttachment:(id)arg1 saveOriginalData:(BOOL)arg2;
- (id)dataForFetchLevel:(unsigned long long)arg1;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)setFromHeadersImageSize:(struct CGSize)arg1 byteCount:(long long)arg2;
- (struct CGSize)imageSizeFromHeaders;
- (long long)imageByteCountFromHeaders;
- (BOOL)isDataDownloaded;
- (unsigned long long)approximateSizeOfWrapper;
- (unsigned long long)approximateSize;
- (id)filenameWithoutHiddenExtension;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (void)discardIconImage;
- (id)toolTip;
- (BOOL)isVideoOrAudio;
- (BOOL)isStationeryCompositeImage;
- (BOOL)isImage;
- (BOOL)isPDF;
- (void)isImage:(char *)arg1 isPDF:(char *)arg2;
- (void)isImage:(char *)arg1 isPDF:(char *)arg2 bestMimeType:(id *)arg3;
- (BOOL)isCalendarInvitation;
- (BOOL)isRemotelyAccessed;
- (id)remoteAccessMimeType;
- (BOOL)isDirectory;
- (BOOL)isPartOfStationery;
- (void)setIsPartOfStationery:(BOOL)arg1;
- (void)takeNewDataFromPath:(id)arg1;
- (BOOL)couldConfuseWindowsClients;
- (id)appleSingleDataWithFilename:(const char *)arg1 length:(unsigned long long)arg2;
- (id)appleDoubleDataWithFilename:(const char *)arg1 length:(unsigned long long)arg2;
- (id)_fileWrapperIncludeData:(BOOL)arg1;
- (id)fileWrapperIncludeData:(BOOL)arg1 fetchLevel:(unsigned long long)arg2;
- (id)fileWrapper;
- (void)setFileWrapper:(id)arg1;
- (id)fileWrapperIfAvailable;
- (void)setFilenameForSaving:(id)arg1;
- (BOOL)createEmptyAttachmentAtPath:(id)arg1;
- (id)createTemporaryFile;
- (id)symbolicLinkDestinationForFileWrapper;
- (id)description;
- (id)quarantineProperties;
- (void)setQuarantineProperties:(id)arg1;
- (id)whereFroms;
- (void)setWhereFroms:(id)arg1;
- (id)savedPath;
- (void)setSavedPath:(id)arg1;
- (id)stationeryCompositeImage;
- (id)mailSpecialHandlingType;
- (void)setMailSpecialHandlingType:(id)arg1;
- (void)setIsCalendarInvitation:(BOOL)arg1;
- (id)messageID;
- (void)setMessageID:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)filePermissions;
- (void)setFilePermissions:(id)arg1;
- (BOOL)shouldHideExtension;
- (void)setShouldHideExtension:(BOOL)arg1;
- (id)extension;
- (void)setExtension:(id)arg1;
- (unsigned int)creator;
- (void)setCreator:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)fileSize;
- (void)setFileSize:(id)arg1;
- (id)originalFilename;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)externalBodyURL;
- (void)setExternalBodyURL:(id)arg1;
- (id)currentData;

@end
