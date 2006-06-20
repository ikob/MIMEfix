/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface MessageTransfer : NSObject
{
    id _delegate;
    NSMutableArray *_operations;
    BOOL _deleteOriginals;
    BOOL _registeredForUndo;
}

+ (void)_undo:(id)fp8;
+ (void)_redo:(id)fp8;
- (void)dealloc;
- (id)initWithMessages:(id)fp8 targetMailboxUid:(id)fp12;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (BOOL)deleteOriginals;
- (void)setDeleteOriginals:(BOOL)fp8;
- (void)beginTransfer;
- (void)_completedTransferWithError:(id)fp8;
- (void)_undo;
- (void)_redo;
- (void)_synchronouslyPerformTransfer;
- (id)destinationMailboxes;

@end

