/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSAttributedString, NSMutableAttributedString, NSMutableString, NSString;

@interface FormatFlowedWriter
{
    NSAttributedString *_inputAttrString;
    NSString *_inputString;
    unsigned int _encoding;
    NSMutableString *_outputString;
    unsigned int _addedTrailingSpaces:1;
    unsigned int _quoteLevel:31;
    struct _NSRange _paraRange;
    NSMutableString *_lineString;
    NSMutableAttributedString *_attrString;
}

+ (id)newWithAttributedString:(id)arg1 encoding:(unsigned int)arg2;
- (void)dealloc;
- (unsigned long long)_findLineBreakInRange:(struct _NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(BOOL)arg3;
- (void)_outputQuotedParagraph;
- (id)outputString;
- (BOOL)addedTrailingSpaces;

@end

