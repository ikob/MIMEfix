/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSView.h"

@class NSButton, NSTextField;

@interface FontPreferenceContainerView : NSView
{
    NSButton *_selectButton;
    NSTextField *_labelTextField;
    NSTextField *_sampleTextField;
    struct _NSRect _myOriginalFrame;
    struct _NSRect _sampleTextFieldOriginalFrame;
    float _buttonOffset;
    float _labelOffset;
    float _sampleOffset;
    SEL getSEL;
    SEL setSEL;
}

- (void)awakeFromNib;
- (void)layoutVertically;
- (void)sizeToFit;
- (SEL)setSEL;
- (void)setSetSEL:(SEL)fp8;
- (SEL)getSEL;
- (void)setGetSEL:(SEL)fp8;

@end

