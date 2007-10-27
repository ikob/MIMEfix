/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface AttachmentManager : NSObject
{
    NSMutableArray *_openedAttachmentPaths;
    NSMutableDictionary *_openedAttachmentMessageIDs;
    NSMutableArray *_messageIDPurgeQueue;
    NSTimer *_purgeTimer;
    int _purgeBehavior;
    NSMutableDictionary *_previewedAttachments;
}

+ (void)_registerDefaults;
+ (id)sharedInstance;
+ (id)openedAttachmentListPath;
+ (BOOL)attachmentPurgingIsEnabled;
- (int)attachmentPurgingBehavior;
- (id)init;
- (void)dealloc;
- (void)initializeAttachmentPurging;
- (void)enableAttachmentPurging;
- (void)disableAttachmentPurging;
- (void)setAttachmentPurgingBehavior:(int)fp8;
- (void)beginLoadingInlineAttachmentsForDisplay:(id)fp8;
- (void)cancelLoadingInlineAttachmentsForDisplay:(id)fp8;
- (BOOL)dragAbortedBecauseOneOrMoreAttachmentsNotDownloaded:(id)fp8 inView:(id)fp12;
- (void)_confirmDownloadSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(struct SheetContext *)fp16;
- (BOOL)dragAttachments:(id)fp8 startPoint:(struct _NSPoint)fp12 view:(id)fp20 event:(id)fp24 image:(id)fp28 delegate:(id)fp32;
- (id)pathsForDraggedAttachments:(id)fp8 fromView:(id)fp12;
- (void)_openFromDownloadedNotification:(id)fp8;
- (void)_downloadCompleted:(id)fp8;
- (id)_urlForAttachment:(id)fp8 attachmentDirectory:(id)fp12;
- (void)addAttachmentToQuickLookPanel:(id)fp8 attachmentDirectory:(id)fp12 window:(id)fp16;
- (struct _NSRect)previewPanel:(id)fp8 frameForURL:(id)fp12;
- (id)previewPanel:(id)fp8 transitionImageForURL:(id)fp12 frame:(struct _NSRect *)fp16;
- (BOOL)previewPanel:(id)fp8 shouldOpenURL:(id)fp12;
- (void)windowWillClose:(id)fp8;
- (void)quickLookAttachments:(id)fp8 window:(id)fp12;
- (void)quickLookAttachmentsFromMessages:(id)fp8 window:(id)fp12;
- (void)openAttachments:(id)fp8 applicationURL:(struct __CFURL *)fp12 window:(id)fp16 delegate:(id)fp20;
- (void)openAttachmentsWithDictionary:(id)fp8;
- (void)saveAttachmentsFromMessages:(id)fp8 window:(id)fp12;
- (void)runSavePanelForAttachments:(id)fp8 window:(id)fp12;
- (void)saveAttachmentsToDownloadDirectory:(id)fp8 window:(id)fp12;
- (BOOL)openTemporaryAttachments:(id)fp8 applicationBundle:(id)fp12 window:(id)fp16;
- (BOOL)openInvitationAttachments:(id)fp8 openImmediately:(BOOL)fp12;
- (void)chooseApplicationToOpenAttachments:(id)fp8 needsSave:(BOOL)fp12 window:(id)fp16 delegate:(id)fp20;
- (void)prepareAttributedString:(id)fp8 forPrinter:(id)fp12;
- (void)_confirmExecutableSheetDidEnd:(id)fp8 alertReturn:(int)fp12 context:(id)fp16;
- (BOOL)openFileURL:(id)fp8 stayInBackground:(BOOL)fp12 window:(id)fp16;
- (BOOL)openFileAtPath:(id)fp8 withApplication:(id)fp12 stayInBackground:(BOOL)fp16;
- (void)configureOpenWithMenu:(id)fp8 forAttachments:(id)fp12;
- (id)contextualMenuForAttachments:(id)fp8 clickedAttachment:(id)fp12 forEditing:(BOOL)fp16;
- (void)saveAttachments:(id)fp8 toDirectory:(id)fp12 makePathsUnique:(BOOL)fp16 window:(id)fp20;
- (void)writeImageAttachmentToPasteboard:(id)fp8;

@end

