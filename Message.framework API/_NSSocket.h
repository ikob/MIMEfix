/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSInvocation, NSMachPort, NSString;

@interface _NSSocket : NSObject
{
    id _streamAndProtocolLock;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    NSString *_protocol;
    NSMachPort *_socketActivityReplyPort;
    NSArray *_clientCertificates;
    NSArray *_trustedCertificates;
    void *_stats;
    void *_request;
    BOOL _openCompleted;
    BOOL _error;
    BOOL _closed;
    long long _connectionSetupState;
    unsigned long long _identifier;
    double _lastReadTime;
    NSInvocation *_eventHandler;
    double _numTimeoutSecs;
    double _numConnectTimeoutSecs;
    long long _activityType;
}

+ (void)_runIOThread;
+ (void)handlePortMessage:(id)arg1;
+ (void)initialize;
+ (long long)simulatedSocketSpeed;
+ (void)setSimulatedSocketSpeed:(long long)arg1;
- (void)_setError:(id *)arg1 fromDomain:(long long)arg2 code:(long long)arg3 andLogIfNecessary:(id)arg4;
- (id)securityProtocol;
- (BOOL)setSecurityProtocol:(id)arg1;
- (unsigned int)cipherKeyLength;
- (void)setTrustedCertificates:(id)arg1;
- (void)setClientIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (id)verboseSSLInformation;
- (struct OpaqueSecTrustRef *)copyServerTrust;
- (id)initWithTimeout:(double)arg1 connectTimeout:(double)arg2;
- (id)init;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (double)connectTimeout;
- (void)setConnectTimeout:(double)arg1;
- (void)dealloc;
- (void)finalize;
- (void)abort;
- (void)finishRequest:(CDStruct_1d72fa59 *)arg1;
- (void)clearError;
- (BOOL)isReadable;
- (BOOL)isWritable;
- (void)waitUntilWritable;
- (BOOL)readIsValid;
- (BOOL)writeIsValid;
- (BOOL)isValid;
- (BOOL)_configureReadStream:(struct __CFReadStream *)arg1 writeStream:(struct __CFWriteStream *)arg2 error:(id *)arg3;
- (BOOL)connectToHost:(id)arg1 withPort:(unsigned int)arg2 protocol:(id)arg3;
- (long long)writeBytes:(const char *)arg1 length:(long long)arg2 error:(id *)arg3;
- (long long)readBytes:(char *)arg1 length:(long long)arg2 error:(id *)arg3;
- (void)setEventHandler:(id)arg1;
- (void)removeEventHandler;
- (id)remoteHostname;
- (unsigned int)remotePortNumber;
- (id)sourceIPAddress;
- (id)sourceHostname;
- (void)_cancelLookupForHost:(struct __CFHost *)arg1 infoType:(int)arg2;
- (int)fileDescriptor;
- (double)lastReadTime;
@property long long activityType; // @synthesize activityType=_activityType;
@property unsigned long long identifier; // @synthesize identifier=_identifier;

@end

