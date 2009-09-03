/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class LibraryMessage, NSDictionary, NSFileHandle, NSString;

@interface DataCollector
{
    NSString *_path;
    NSString *_tmpPath;
    LibraryMessage *_message;
    NSString *_part;
    NSFileHandle *_fileHandle;
    unsigned long long _length;
    NSDictionary *_plist;
    BOOL _isEmpty;
}

- (id)initWithMessage:(id)arg1 isPartial:(BOOL)arg2 part:(id)arg3;
- (void)appendData:(id)arg1;
- (void)setData:(id)arg1;
- (void)done;
- (void)dealloc;
- (void)finalize;

@end

