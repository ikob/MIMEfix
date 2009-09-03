/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSMutableSet, NSString, NSTimer;

@interface NetworkController
{
    struct __SCDynamicStore *_store;
    NSString *_domainName;
    unsigned int _waitingForDialToFinish:1;
    NSTimer *_notificationTimer;
    NSMutableSet *_watchedHosts;
}

+ (id)sharedInstance;
+ (id)subnetForIPAddress:(id)arg1;
+ (id)baseDomainsForDomains:(id)arg1;
+ (BOOL)hostnameIsFullyQualified:(id)arg1;
+ (id)applyIDNAToHostname:(id)arg1 encode:(BOOL)arg2;
+ (id)encodeAddressForIDNA:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (unsigned long long)networkStatus;
- (id)domainName;
- (id)domainNames;
- (id)IPAddresses;
- (id)primaryEthernetAddressAsString;
- (BOOL)isHostReachable:(id)arg1;
- (void)startWatchingReachabilityOfHost:(id)arg1;

@end

