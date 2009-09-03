/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSMutableString;

@interface MimeEnrichedReader
{
    CDAnonymousStruct14 _inputBuffer;
    long long _currentIndex;
    long long _inputLength;
    unsigned int _noFillLevel:30;
    unsigned int _eatOneNewline:1;
    unsigned int _insideComment:1;
    long long _lastQuoteLevel;
    struct __CFArray *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    double _indentWidth;
    BOOL outputShouldBeHTML;
}

+ (id)punctuationSet;
+ (id)parenSet;
- (id)init;
- (void)mismatchError:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)appendStringToBuffer:(id)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)fixConsecutiveSpaces:(id)arg1;
- (void)closeUpQuoting;
- (void)handleNoParameterCommand:(const CDAnonymousStruct13 *)arg1;
- (void)setupFontStackEntry:(struct _CommandStackEntry *)arg1;
- (void)beginCommand:(id)arg1;
- (void)endCommand:(id)arg1;
- (void)parseParameterString:(id)arg1;
- (id)currentFont;
- (int)readTokenInto:(id *)arg1;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertEnrichedString:(id)arg1 intoPlainOutputString:(id)arg2;

@end

