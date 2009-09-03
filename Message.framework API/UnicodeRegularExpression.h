/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCodingProtocol.h"
#import "NSCopyingProtocol.h"

@class NSString;

@interface UnicodeRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    struct URegularExpression *_regex;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (id)initWithExpressionString:(id)fp8;
- (id)initWithExpressionString:(id)fp8 options:(unsigned int)fp12;
- (unsigned int)_numberOfSubexpressions;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (id)expressionString;
- (struct _NSRange)matchedRangeForString:(id)fp8 range:(struct _NSRange)fp12 subexpressionRanges:(struct _NSRange *)fp20 count:(unsigned int)fp24;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end
