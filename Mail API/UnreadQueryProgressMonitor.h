/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "QueryProgressMonitorProtocol.h"

@interface UnreadQueryProgressMonitor : NSObject <QueryProgressMonitor>
{
    unsigned int sequenceNumber;
    unsigned int librarySequenceNumber;
}

- (id)initWithSequenceNumber:(unsigned int)fp8 librarySequenceNumber:(unsigned int)fp12;
- (BOOL)shouldCancel;

@end

