/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSTextField.h"

@class NSString;

@interface NSExampleTextField : NSTextField
{
    NSString *_exampleText;
}

- (void)dealloc;
- (void)_reallySetStringValue:(id)fp8;
- (void)awakeFromNib;
- (void)setStringValue:(id)fp8;
- (void)removeGrayExampleString;
- (BOOL)becomeFirstResponder;
- (void)selectText:(id)fp8;
- (void)textDidEndEditing:(id)fp8;
- (void)setEnabled:(BOOL)fp8;
- (id)stringValue;

@end

