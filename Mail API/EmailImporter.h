/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "Importer.h"

@class NSArray, NSData, NSString;

@interface EmailImporter : Importer
{
    NSString *_rootFolderPath;
    NSArray *_sourceFolderPaths;
    NSArray *_sourcePaths;
    NSString *_destinationFolderPath;
    NSString *_attachmentBeingSearchedFor;
    NSString *_lastDirectoryFound;
    NSString *_temporaryImportFolderPath;
    char *_lineDelimiter;
    char *_fromSpaceSeparator;
    NSData *_newline;
    NSData *_greaterThanSign;
    NSData *_fromSpace;
    BOOL _errorsDuringImport;
}

- (id)init;
- (void)performImport;
- (void)revealMailbox:(id)arg1;
- (void)importFinished;
- (id)importFinishedText;
- (id)statusLine;
- (void)cleanup;
- (void)readMailbox:(id)arg1 intoURL:(id)arg2;
- (void)processUserSelection;
- (void)importMailbox:(id)arg1;
- (id)preProcessSourceData:(id)arg1;
- (char *)lineDelimiter;
- (id)regexForAttachmentName:(id)arg1;
- (id)destinationFolderPath;
- (id)destinationFolderName;
- (void)setLineDelimiter:(char *)arg1;
- (char *)fromSpaceSeparator;
- (void)setFromSpaceSeparator:(char *)arg1;
- (id)rootFolder;
- (void)setRootFolder:(id)arg1;
- (id)sourceFolders;
- (void)setSourceFolders:(id)arg1;
- (id)sourceList;
- (void)setSourceList:(id)arg1;
- (void)setErrorsDuringImport:(BOOL)arg1;
- (BOOL)errorsDuringImport;
- (id)messageWithImporterData:(id)arg1;
- (void)addMessagesToLibrary:(id)arg1 withMailbox:(id)arg2;
- (void)updateSubjectStringForMessageHeaders:(id)arg1;
- (void)convertChar:(BOOL)arg1 toChar:(BOOL)arg2 inBytes:(char *)arg3 length:(long long)arg4;
- (id)validItemsFromPaths:(id)arg1 validitySelector:(SEL)arg2;
- (id)searchForValidItemsInsideDirectory:(id)arg1 validitySelector:(SEL)arg2 limit:(long long)arg3 searchDepth:(long long)arg4;
- (id)searchForValidItemInsideDirectory:(id)arg1 validitySelector:(SEL)arg2 searchDepth:(long long)arg3;
- (id)uniqueDirectoriesForItems:(id)arg1;
- (id)longestCommonPathForItems:(id)arg1;
- (id)regenerateMessageData:(id)arg1 isHTML:(BOOL)arg2 isRich:(BOOL)arg3;
- (id)createAttachmentText:(id)arg1 isHTML:(BOOL)arg2;
- (id)locateAttachments:(id)arg1 inFolder:(id)arg2;
- (id)copyAttachmentsToMailFolder:(id)arg1;
- (id)_newline;
- (id)_greaterThanSign;
- (id)_fromSpace;
- (id)mailboxForImportItem:(id)arg1;
- (void)dealloc;

@end

