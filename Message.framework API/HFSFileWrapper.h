/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSFileWrapper.h"

@interface HFSFileWrapper : NSFileWrapper
{
}

- (BOOL)createEmptyAttachmentAtPath:(id)fp8;
- (BOOL)_emptyAttachmentExists;
- (id)emptyAttachmentPath;
- (void)removeEmptyAttachment;
- (void)setSavedPath:(id)fp8;
- (id)savedPath;
- (BOOL)writeToFile:(id)fp8 atomically:(BOOL)fp12 updateFilenames:(BOOL)fp16;
- (id)iconCreateIfNecessary:(BOOL)fp8;
- (id)initWithPath:(id)fp8;
- (void)setPreferredFilename:(id)fp8;
- (void)setIcon:(id)fp8;
- (id)icon;
- (BOOL)isPlaceholder;
- (BOOL)_updateFromPath:(id)fp8 checkOnly:(BOOL)fp12 exists:(char *)fp16;

@end

