/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface URLMatch : NSObject
{
    struct _NSRange _range;
    NSString *_url;
}

- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
@property(copy) NSString *url; // @synthesize url=_url;
@property struct _NSRange range; // @synthesize range=_range;

@end

