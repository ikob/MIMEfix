/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "QueryProgressMonitor-Protocol.h"

@interface UnreadQueryProgressMonitor <QueryProgressMonitor>
{
    unsigned long long sequenceNumber;
    long long librarySequenceNumber;
}

- (id)initWithSequenceNumber:(unsigned long long)arg1 librarySequenceNumber:(long long)arg2;
- (BOOL)shouldCancel;

@end

