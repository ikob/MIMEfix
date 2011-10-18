/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class ImportAssistant, NSArray, NSMutableArray, NSString;

@interface Importer : NSObject
{
    ImportAssistant *_delegate;
    NSMutableArray *_importArray;
    NSString *_applicationString;
    NSArray *_importFields;
    BOOL _importCanceled;
}

+ (id)explanatoryText;
+ (id)name;
- (id)init;
- (id)name;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)importArray;
- (void)clearImportArray;
- (void)addItemToImportArray:(id)arg1;
- (long long)countOfEnabledItems;
- (BOOL)importCanceled;
- (void)setImportCanceled:(BOOL)arg1;
- (id)importFields;
- (void)setImportFields:(id)arg1;
- (void)sortArray:(id)arg1;
- (id)statusLine;
- (id)importFinishedText;
- (id)creatorCode;
- (void)cleanup;
- (id)prepareForImport;
- (void)performImport;
- (void)importFinished;
- (void)_runApplescript:(id)arg1 andReturnArray:(id)arg2;
- (id)runApplescript:(id)arg1;
- (id)arrayFromDescriptor:(id)arg1;
- (BOOL)setApplicationString;
- (void)dealloc;

@end

