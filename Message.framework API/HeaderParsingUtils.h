/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface HeaderParsingUtils : NSObject
{
}

+ (id)dictionaryForReceivedHeader:(id)fp8;
+ (void)_setReceivedValuesInDictionary:(id)fp8 key:(id)fp12 value:(id)fp16 comment:(id)fp20 actualHostDotted:(id)fp24 actualHostIP:(id)fp28;
+ (BOOL)isHostRemote:(id)fp8;
+ (id)firstRemoteReceivedHeaderForReceivedHeaders:(id)fp8;

@end

