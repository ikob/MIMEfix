/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSWindow;

@interface _SheetContext : NSObject
{
    NSArray *_attachments;
    NSArray *_messages;
    id _delegate;
    NSWindow *_window;
    BOOL _needsSave;
}

- (void)dealloc;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;

@end
