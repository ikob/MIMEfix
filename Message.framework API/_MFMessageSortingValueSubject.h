/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/MFMessageSortingValue.h>

@class NSString;

@interface _MFMessageSortingValueSubject : MFMessageSortingValue
{
    NSString *_subject;
    unsigned char _subjectPrefixLength;
}

- (void)dealloc;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)setSubjectPrefixLength:(unsigned char)arg1;
- (id)subjectAndPrefixLength:(unsigned long long *)arg1;
- (id)description;

@end

