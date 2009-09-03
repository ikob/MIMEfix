/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/MonitoredOperation.h>

@class EWSGateway, EWSResponseOperation;

@interface EWSRequestOperation : MonitoredOperation
{
    EWSResponseOperation *_responseOperation;
    EWSGateway *_gateway;
    BOOL _isOffline;
}

@property(retain) EWSGateway *gateway; // @synthesize gateway=_gateway;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"EWSGateway",&,N,V_gateway,P

@property(retain) EWSResponseOperation *responseOperation; // @synthesize responseOperation=_responseOperation;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"EWSResponseOperation",&,N,V_responseOperation,P


+ (Class)classForResponse;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)prepareRequest;
- (void)executeOperation;
- (BOOL)isFolderRequest;
- (BOOL)isOffline;
- (void)goOffline;
- (void)setupOfflineResponse;
- (id)description;
- (id)gateway;
- (void)setGateway:(id)arg1;
- (id)responseOperation;
- (void)setResponseOperation:(id)arg1;

@end
