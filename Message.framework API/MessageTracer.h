/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface MessageTracer : NSObject
{
}

+ (void)messageTraceOperationError:(id)arg1 domainPrefix:(id)arg2 domainSuffix:(id)arg3 uuid:(id)arg4 duration:(double)arg5 count:(unsigned long long)arg6 size:(unsigned long long)arg7;
+ (void)messageTraceDomainPrefix:(id)arg1 domainSuffix:(id)arg2 signature:(id)arg3 signature2:(id)arg4 extraStatus:(id)arg5;
+ (void)messageTraceResult:(const char *)arg1 count:(unsigned long long)arg2 domainPrefix:(id)arg3 domainSuffix:(id)arg4 signature:(id)arg5 extraStatus:(id)arg6;
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 uuid:(id)arg3 signature:(id)arg4 extraStatus:(id)arg5;
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 signature:(id)arg3 extraStatus:(id)arg4;
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 signature:(id)arg3;
+ (id)bucketSignatureForValue:(long long)arg1;

@end

