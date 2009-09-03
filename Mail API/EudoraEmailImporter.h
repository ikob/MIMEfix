/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "FilesystemEmailImporter.h"

@interface EudoraEmailImporter : FilesystemEmailImporter
{
}

+ (id)name;
+ (id)explanatoryText;
- (char *)fromString;
- (BOOL)isValidMailbox:(id)arg1;
- (id)preProcessSourceData:(id)arg1;
- (struct _NSRange)_rangeOfDataContainedByTag:(char *)arg1 endTag:(char *)arg2 inData:(id)arg3;
- (void)_stripTag:(char *)arg1 fromData:(id)arg2;
- (id)_attachmentsInEudoraMessage:(id)arg1;
- (BOOL)_isAttachmentBeingSearchedFor:(id)arg1;

@end

