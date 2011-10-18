/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCondition, NSString;

@interface DatabaseRecoverer : NSObject
{
    NSString *_path;
    long long _type;
    NSCondition *_analysisCondition;
    long long _analysisResult;
}

+ (id)moveDatabaseToUniquePath:(id)arg1;
+ (BOOL)moveDatabaseFromPath:(id)arg1 toPath:(id)arg2;
- (id)initWithPath:(id)arg1 type:(long long)arg2;
- (id)init;
- (void)dealloc;
- (void)_analyzeBusyCondition;
- (void)analyzeBusyCondition;
- (BOOL)fileLocked;
- (BOOL)aRemoteApplicationIsAccessingTheDatabase;
- (BOOL)lockFileFound;
- (void)removeLockFile;
- (void)recover;
- (void)_removeLocks;
- (id)_moveToUniquePath;
- (void)_moveToOriginalPath:(id)arg1;
@property long long analysisResult; // @synthesize analysisResult=_analysisResult;
@property(retain) NSCondition *analysisCondition; // @synthesize analysisCondition=_analysisCondition;
@property long long type; // @synthesize type=_type;
@property(retain) NSString *path; // @synthesize path=_path;

@end

