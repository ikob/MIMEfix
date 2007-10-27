/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@class NSString;

struct CGColor;

struct CGPath;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct ComponentInstanceRecord {
    long _field1[1];
};

struct MailAlertInfo {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    int _field5;
};

struct MailPasswordInfo {
    id _field1;
    id _field2;
    char *_field3;
    id _field4;
};

struct OpaqueEventHandlerRef;

struct PointerDataRefRecord;

struct ProcessSerialNumber {
    unsigned int highLongOfPSN;
    unsigned int lowLongOfPSN;
};

struct SheetContext {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    char _field5;
};

struct UserDataRecord;

struct _MessageSortingInformation {
    char _field1;
    char _field2;
    id _field3;
    void *_field4;
};

struct _NSPoint {
    float x;
    float y;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _NSRect {
    struct _NSPoint origin;
    struct _NSSize size;
};

struct _NSSize {
    float width;
    float height;
};

struct _NSZone;

struct _QuotaSimpleSortDescriptor {
    void *comparator;
    char ascending;
};

struct __CFDictionary;

struct __CFSet;

struct __CFURL;

struct menuItemInfo {
    int _field1;
    int _field2;
};

struct visible_state {
    char hadSelection;
    char selectionWasVisible;
    char scrollerWasAtEnd;
    char forceSelToVisible;
    NSString *msgIDToPin;
    float msgUpperLeft;
};

typedef struct {
    int _field1;
    float _field2;
} CDAnonymousStruct1;

typedef struct {
    int _field1;
    char _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    char _field7;
    char _field8;
} CDAnonymousStruct2;

