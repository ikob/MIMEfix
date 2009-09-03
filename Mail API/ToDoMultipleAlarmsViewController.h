/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class ToDoAlarms, ToDoMultipleAlarmsView;

@interface ToDoMultipleAlarmsViewController
{
    ToDoMultipleAlarmsView *_multipleAlarmsView;
    ToDoAlarms *_alarms;
}

- (void)dealloc;
- (void)minimizeAlarms:(BOOL)arg1;
- (void)enableAlarms:(BOOL)arg1;
- (void)registerSubController:(id)arg1;
- (void)unregisterSubController:(id)arg1;
- (void)alarmSubControllerAddAlarmRequested:(id)arg1;
- (void)alarmSubControllerRemoveAlarmRequested:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)alarms;
- (void)setAlarms:(id)arg1;

@end

