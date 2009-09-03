/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSMutableArray, RSSAuthenticationPanel;

@interface RSSPanelAuthenticationHandler
{
    RSSAuthenticationPanel *_challengePanel;
    NSMutableArray *_challenges;
    NSMutableArray *_feeds;
}

@property(retain) RSSAuthenticationPanel *challengePanel; // @synthesize challengePanel=_challengePanel;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedHandler;
- (id)init;
- (void)dealloc;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (id)resolveAuthenticationIssuesForFeedURL:(id)arg1 name:(id)arg2 update:(id)arg3;
- (id)resolveAuthenticationIssuesForFeedURLs:(id)arg1 names:(id)arg2 update:(id)arg3;
- (void)_tryNextChallenge;
- (void)startAuthentication:(id)arg1 forFeedTransporter:(id)arg2;
- (void)cancelAuthentication:(id)arg1;
- (void)_authenticationDoneWithChallenge:(id)arg1 result:(id)arg2 context:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_connectionFinished:(id)arg1 cancelled:(BOOL)arg2;
- (id)challengePanel;
- (void)setChallengePanel:(id)arg1;

@end

