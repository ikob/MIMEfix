/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/SizeEngine.h>

@interface SizeEngine (Internal)
- (void)_startWorkerThreadIfNeeded;
- (void)_workerThreadFinished:(id)arg1;
- (void)_runWorkerThread;
- (BOOL)_prepareToRefresh;
- (BOOL)_shouldStartWorkerThread;
- (void)_postChangeNotificationWithUserInfo:(id)arg1;
@end

