/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSScanner.h"

@interface NSScanner (NSScannerUtils)
- (BOOL)scanStringOfLength:(unsigned int)fp8 intoString:(id *)fp12;
- (BOOL)betterScanUpToCharactersFromSet:(id)fp8 intoString:(id *)fp12;
- (BOOL)scanEndIntoString:(id *)fp8;
- (id)nextTokenWithPunctuation:(id)fp8;
- (BOOL)scanUpAndOverString:(id)fp8;
@end

