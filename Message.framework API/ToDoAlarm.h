/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "ChangeMergerObjectProtocol.h"
#import "NSCopyingProtocol.h"

@class CalAlarm, NSData, NSDate, NSString, NSURL;

@interface ToDoAlarm : NSObject <ChangeMergerObject, NSCopying>
{
    NSString *_alarmID;
    BOOL _enabled;
    int _type;
    int _offsetType;
    unsigned int _offsetDays;
    NSDate *_reminderDate;
    int _time;
    NSString *_sound;
    NSString *_emailAddress;
    NSURL *_url;
    CalAlarm *_calAlarm;
    NSString *_syncToDoID;
    id _delegate;
    NSData *_unrecognizedData;
    BOOL _hasChanged;
    int _changedProperties;
    int _previousOffsetType;
    int _previousType;
    id _lock;
}

+ (id)referenceDate;
- (void)setDefaultAlarmTime;
- (id)init;
- (id)initWithType:(int)fp8;
- (id)initWithAlarm:(id)fp8;
- (int)typeBasedOnIvars;
- (id)initWithCalAlarm:(id)fp8;
- (id)dateByCombiningDate:(id)fp8 andTime:(double)fp12;
- (id)calAlarmFromToDoAlarm;
- (id)initWithData:(id)fp8;
- (id)data;
- (BOOL)isIdenticalToAlarm:(id)fp8;
- (BOOL)isEquivalentToAlarm:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)setLock:(id)fp8;
- (void)dealloc;
- (id)alarmID;
- (void)setAlarmID:(id)fp8;
- (BOOL)hasChanged;
- (void)setHasNotChanged;
- (void)mergeFromAlarm:(id)fp8 overwriteDirtyProperties:(BOOL)fp12 usingCondition:(void *)fp16;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)fp8;
- (int)type;
- (void)setType:(int)fp8;
- (int)offsetType;
- (void)setOffsetType:(int)fp8;
- (unsigned int)offsetDays;
- (void)setOffsetDays:(unsigned int)fp8;
- (id)reminderDate;
- (void)setReminderDate:(id)fp8;
- (int)time;
- (void)setTime:(int)fp8;
- (id)sound;
- (void)setSound:(id)fp8;
- (id)emailAddress;
- (void)setEmailAddress:(id)fp8;
- (id)url;
- (void)setUrl:(id)fp8;
- (id)description;
- (id)unrecognizedData;
- (void)setUnrecognizedData:(id)fp8;
- (void)buildSetOfRecognizedKeys;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)postNotificationName:(id)fp8 userInfo:(id)fp12 onCenter:(id)fp16;
- (double)relativeTriggerFromToDoAlarm;
- (unsigned int)defaultAlarmTime;
- (int)defaultAlarmOffset;
- (id)uniqueID;
- (id)changedPropertiesBitField;
- (void)setChangedPropertiesBitField:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;

@end

