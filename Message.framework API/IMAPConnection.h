/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/Connection.h>

@class IMAPAccount, IMAPGateway, IMAPMailbox, InvocationQueue, NSMutableSet, NSRecursiveLock, NSString;

@interface IMAPConnection : Connection
{
    IMAPAccount *_IMAPAccount;
    unsigned int _capabilityFlags:10;
    unsigned int _connectionState:3;
    NSMutableSet *_capabilities;
    NSString *_separatorChar;
    NSString *_selectedMailbox;
    IMAPMailbox *_selectedIMAPMailbox;
    BOOL _selectedMailboxIsReadOnly;
    BOOL _canStartIdle;
    unsigned int _commandNumber;
    unsigned int _readBufferSize;
    double _expirationTime;
    InvocationQueue *_streamEventQueue;
    unsigned int _fetchSizeNextReadingIndex;
    double _fetchSizeRollingAverage;
    BOOL _fetchSizeFirstTime;
    BOOL _fetchSizeFilledHistory;
    double _fetchSizeRecentTimes[8];
    IMAPGateway *_gateway;
    NSRecursiveLock *_validatingLock;
}

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
+ (void)_setReadSizeParameters;
- (id)initWithPendingGateway:(BOOL)fp8 account:(id)fp12;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)displayName;
- (BOOL)reconnect;
- (void)_setupConnection;
- (BOOL)_teardownConnectionWithResult:(BOOL)fp8;
- (void)disconnectAndNotify:(BOOL)fp8;
- (void)disconnect;
- (void)quit;
- (BOOL)_tryToStartValidating;
- (void)setIsValidating:(BOOL)fp8;
- (BOOL)isValidating;
- (id)gateway;
- (id)_gateway;
- (int)connectionState;
- (int)currentConnectionState;
- (void)_transitionToState:(int)fp8;
- (void)_transitionToState:(int)fp8 selectedMailbox:(id)fp12 readOnly:(BOOL)fp16;
- (void)_setSelectedMailbox:(id)fp8;
- (id)mailboxNameIfSelected:(BOOL)fp8;
- (id)selectedIMAPMailbox;
- (BOOL)needsSelectForMailboxName:(id)fp8 gateway:(id)fp12;
- (BOOL)isValid;
- (BOOL)isValidPreferringNetworkCheck:(BOOL)fp8;
- (BOOL)isDisconnected;
- (BOOL)executeClientOperation:(id)fp8;
- (BOOL)_sendCommand:(id)fp8 response:(id *)fp12;
- (void)_socketDiedError:(id *)fp8;
- (BOOL)_writeData:(id)fp8 dontLogBytesInRange:(struct _NSRange)fp12 error:(id *)fp20;
- (BOOL)_readLineIntoData:(id)fp8 error:(id *)fp12;
- (BOOL)_readBytesIntoData:(id)fp8 desiredLength:(unsigned int)fp12 error:(id *)fp16;
- (id)_copyNextServerResponse:(id *)fp8;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(id)fp8;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(id)fp8 exists:(unsigned int *)fp12;
- (id)_errorForResponse:(id)fp8 operation:(id)fp12;
- (id)capabilities;
- (BOOL)supportsCapability:(int)fp8;
- (void)updateCanStartIdle:(BOOL)fp8;
- (void)_clearCapabilities;
- (void)_addToCapabilities:(id)fp8;
- (void)_fetchCapabilitiesIfNeeded;
- (BOOL)executeCapability:(id)fp8;
- (BOOL)executeNoop:(id)fp8;
- (BOOL)authenticateUsingAccount:(id)fp8;
- (BOOL)_reauthenticate;
- (BOOL)_authenticateUsingAccount:(id)fp8 authenticator:(id)fp12;
- (int)_authenticateUsingHostname:(id)fp8 username:(id)fp12 password:(id)fp16 authenticator:(id)fp20;
- (BOOL)executeAuthenticate:(id)fp8;
- (int)_startTLSForSecurityLayerType:(int)fp8;
- (id)_getServerAlertErrorFromResponse:(id)fp8 forCommand:(id)fp12;
- (BOOL)_loginWithUsername:(id)fp8 password:(id)fp12;
- (BOOL)executeLogin:(id)fp8;
- (BOOL)executeLogout:(id)fp8;
- (id)separatorChar;
- (void)setSeparatorChar:(id)fp8;
- (BOOL)executeListOrLSub:(id)fp8;
- (BOOL)executeUnselect:(id)fp8;
- (void)handleStreamEvent:(id)fp8;
- (void)handleBytesAvailable;
- (BOOL)isIdle;
- (void)startIdle;
- (BOOL)executeIdle:(id)fp8;
- (BOOL)executeDone:(id)fp8;
- (BOOL)executeUIDExpunge:(id)fp8;
- (BOOL)executeStatus:(id)fp8;
- (BOOL)executeSubscribeOperation:(id)fp8;
- (BOOL)executeSelectOperation:(id)fp8;
- (BOOL)executeUIDSearch:(id)fp8;
- (BOOL)executeUIDStore:(id)fp8;
- (id)_responseFromSendingOperation:(id)fp8 tryCreate:(char *)fp12;
- (BOOL)executeUIDCopy:(id)fp8;
- (BOOL)executeAppend:(id)fp8;
- (BOOL)executeNamespace:(id)fp8;
- (void)resetTimingHistory;
- (double)updatedRecentAverageWithNewValue:(double)fp8;
- (void)setReadBufferSizeFromElapsedTime:(double)fp8 bytesRead:(unsigned int)fp16;
- (unsigned int)readBufferSize;
- (void)setReadBufferSize:(unsigned int)fp8;
- (BOOL)executeFetch:(id)fp8;
- (void)lock;
- (id)description;
- (void)setSelectedIMAPMailbox:(id)fp8;
- (BOOL)canStartIdle;
- (void)setCanStartIdle:(BOOL)fp8;
- (id)validatingLock;
- (void)setValidatingLock:(id)fp8;
- (void)setGateway:(id)fp8;
- (id)account;
- (void)setAccount:(id)fp8;

@end

