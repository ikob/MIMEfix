/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "IMAPObject-Protocol.h"
#import "MFChanging-Protocol.h"
#import "NSCopying-Protocol.h"

@protocol LibraryObject <NSCopying, IMAPObject, MFChanging>
- (long long)libraryID;
- (id)remoteID;
- (void)setRemoteID:(id)arg1;
@end

