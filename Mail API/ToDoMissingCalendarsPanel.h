/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSPopUpButton, NSString, NSTextField;

@interface ToDoMissingCalendarsPanel : NSObject
{
    int _mode;
    NSString *_calendarName;
    NSPopUpButton *_calendarMenu;
    NSTextField *_headingText;
    NSTextField *_detailsText;
}

- (id)init;
- (void)dealloc;
- (void)showWithCalendarNames:(id)fp8 accountName:(id)fp12;
- (int)selectedMode;
- (id)calendarName;
- (void)confirm:(id)fp8;
- (void)cancel:(id)fp8;

@end

