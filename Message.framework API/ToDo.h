/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CalTask, MFUUID, Message, NSData, NSDate, NSMutableArray, NSString, NSURL, ToDoAlarms, ToDoCalendar;

@interface ToDo <NSCoding, NSCopying>
{
    BOOL _dueDateEnabled;
    NSDate *_dueDate;
    BOOL _completed;
    NSDate *_dateCompleted;
    ToDoAlarms *_alarms;
    BOOL _priorityEnabled;
    int _priority;
    ToDoCalendar *_calendar;
    NSString *_calendarID;
    NSString *_calendarTitle;
    NSString *_title;
    NSString *_notes;
    NSURL *_url;
    NSString *_todoID;
    NSString *_previousToDoID;
    NSData *_referencedTextLocation;
    NSString *_documentID;
    NSData *_referencedMessageID;
    NSDate *_dateCreated;
    NSData *_unrecognizedData;
    NSDate *_dateStamp;
    int _changedProperties;
    BOOL _hasChanged;
    CalTask *_calTask;
    NSMutableArray *_keysDigest;
    BOOL _isEWSToDo;
}

@property(readonly) NSString *todoID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",R,P

@property(readonly) NSString *previousToDoID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",R,P

@property(readonly) BOOL hasMessageReference;
@property(readonly) Message *messageReference;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"Message",R,P

@property(retain) NSString *documentID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",&,P

@property(readonly) MFUUID *documentUUID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"MFUUID",R,P

@property(retain) NSData *referencedMessageID;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSData",&,P

@property(retain) NSData *referencedTextLocation;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSData",&,P


+ (id)exchangeConversionLocalizedMessage;
+ (id)exchangeConversionLocalizedInfo;
+ (id)exchangeConversionLocalizedPluralMessage;
+ (id)exchangeConversionLocalizedPluralInfo;
+ (id)decodeMailitemURI:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (int)todoAlarmPriority:(unsigned long long)arg1;
- (unsigned long long)calAlarmPriority:(int)arg1;
- (id)initWithCalTask:(id)arg1;
- (id)calTaskFromToDo;
- (void)updateNonCalTaskInformationFrom:(id)arg1;
- (void)updateWithCalTask:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)data;
- (BOOL)isEquivalentToCalTask:(id)arg1;
- (BOOL)isIdenticalTo:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (void)_todoChangedProperties:(unsigned int)arg1;
- (void)postToDoInfoChangedNotification:(unsigned int)arg1;
- (int)changedProperties;
- (id)todoID;
- (void)setToDoID:(id)arg1;
- (id)previousToDoID;
- (void)setPreviousToDoID:(id)arg1;
- (BOOL)hasChanged;
- (void)setHasNotChanged;
- (BOOL)hasMessageReference;
- (id)messageReference;
- (id)documentID;
- (void)setDocumentID:(id)arg1;
- (id)documentUUID;
- (id)referencedMessageID;
- (void)setReferencedMessageID:(id)arg1;
- (id)referencedTextLocation;
- (void)setReferencedTextLocation:(id)arg1;
- (BOOL)overdue;
- (BOOL)dueDateEnabled;
- (void)setDueDateEnabled:(BOOL)arg1;
- (id)dueDate;
- (void)setDueDate:(id)arg1;
- (id)effectiveDueDate;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (int)effectiveCompleteState;
- (id)dateCompleted;
- (void)setDateCompleted:(id)arg1;
- (id)dateCreated;
- (void)setDateCreated:(id)arg1;
- (id)dateStamp;
- (void)setDateStamp:(id)arg1;
- (id)alarms;
- (long long)numberOfAlarms;
- (void)setAlarms:(id)arg1;
- (BOOL)canAddAlarm;
- (BOOL)priorityEnabled;
- (void)setPriorityEnabled:(BOOL)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (int)effectivePriority;
- (BOOL)effectivePriorityIsValid:(int)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)setCalendarUsingID:(id)arg1;
- (void)calendarUpdated:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)notes;
- (void)setNotes:(id)arg1;
- (BOOL)notesHaveChanged;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)unrecognizedData;
- (void)setUnrecognizedData:(id)arg1;
- (BOOL)isEditable;
- (void)prepareToAddAgain;
- (void)mergeFromToDo:(id)arg1 overwriteDirtyProperties:(BOOL)arg2 usingCondition:(void *)arg3;
- (id)description;
- (id)shortDescription;
- (id)richDescription;
- (id)account;
- (id)todoStore;
- (void)buildSetOfRecognizedKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isUnique;
- (void)unique;
- (void)clearMessageLinks;
- (BOOL)isCompatibleWithCalendar;
- (void)makeCompatibleWithCalendar;
- (BOOL)belongsToActiveMailAccount;
- (BOOL)isExchangeCompatible;
- (void)makeExchangeCompatible;
- (id)mailitemURIWithReferences:(BOOL)arg1;
- (void)toDoAlarms:(id)arg1 alarmAdded:(id)arg2;
- (void)toDoAlarms:(id)arg1 alarmRemoved:(id)arg2;
- (void)toDoAlarms:(id)arg1 alarmUpdated:(id)arg2;
- (id)calTask;
- (void)setCalTask:(id)arg1;
- (id)calendarTitle;
- (id)calendarID;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 onCenter:(id)arg3;
- (id)uniqueID;
- (id)changedPropertiesBitField;
- (void)setChangedPropertiesBitField:(id)arg1;
- (id)initForCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasSamePropertiesAs:(id)arg1;
- (void)setHasChanged:(BOOL)arg1;
- (void)setChangedProperties:(int)arg1;
- (void)_setPropertiesUsingInfoEmbeddedInMailitemURI;
- (void)addRecognizedKeysToDictionary:(id)arg1;
- (void)addKeyToDigest:(const id)arg1;
- (void)_setCalendarTitle:(id)arg1;
- (void)_setCalendarID:(id)arg1;
- (void)_calendarChanged;

@end

