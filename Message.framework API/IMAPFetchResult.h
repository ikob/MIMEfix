/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface IMAPFetchResult : NSObject
{
    union {
        NSArray *envelope;
        NSString *internalDate;
        unsigned int messageSize;
        NSArray *bodyStructure;
        struct {
            NSString *section;
            unsigned int startOffset;
            NSData *sectionData;
        } bodySectionInfo;
        unsigned int uid;
        NSArray *flags;
    } _typeSpecific;
    unsigned long long _itemType;
}

- (id)initWithType:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (unsigned long long)type;
- (BOOL)needsLineEndingConversion;
- (id)envelope;
- (void)setEnvelope:(id)arg1;
- (id)internalDate;
- (void)setInternalDate:(id)arg1;
- (id)fetchData;
- (void)setFetchData:(id)arg1;
- (unsigned int)messageSize;
- (void)setMessageSize:(unsigned int)arg1;
- (id)bodyStructure;
- (void)setBodyStructure:(id)arg1;
- (unsigned int)startOffset;
- (void)setStartOffset:(unsigned int)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (unsigned int)uid;
- (void)setUid:(unsigned int)arg1;
- (id)flagsArray;
- (void)setFlagsArray:(id)arg1;
- (unsigned int)encoding;
- (unsigned int)messageFlags;
- (id)description;

@end

