/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class BytesFormatter, NSArrayController, NSString;

@interface ActivityAggregate : NSObject
{
    struct __CFArray *_rateArray;
    BytesFormatter *_bytesFormatter;
    NSArrayController *_monitorController;
    float _rate;
    float _progress;
    BOOL _canCancel;
    unsigned int _itemsDone;
    unsigned int _itemsTotal;
    float _unifiedDone;
    unsigned int _baseItemsDone;
    unsigned int _baseItemsTotal;
    float _baseUnifiedDone;
    NSString *_bkItemDescription;
    NSString *_nameSingular;
    NSString *_namePlural;
    NSString *_status;
    int _activityType;
    BOOL _isResetting;
    BOOL _isProgressing;
    BOOL _bkIsProgressing;
    double _startTime;
    double _estimatedTimeRemaining;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (id)monitorController;
- (id)formattedRate;
- (unsigned int)currentItem;
- (void)setItemsDone:(unsigned int)fp8;
- (void)setItemsTotal:(unsigned int)fp8;
- (void)setUnifiedDone:(float)fp8;
- (void)setBkIsProgressing:(BOOL)fp8;
- (void)setCanCancel:(BOOL)fp8;
- (void)setIsProgressing:(BOOL)fp8;
- (void)setProgress:(float)fp8;
- (void)setRate:(float)fp8;
- (void)setEstimatedTimeRemaining:(double)fp8;
- (BOOL)isProgressIndeterminate;
- (void)updateStatus;
- (void)reset;
- (void)addActivityMonitor:(id)fp8;
- (void)removeActivityMonitor:(id)fp8;
- (void)updateAggregateIsProgressing;
- (void)updateAggregateValues;
- (void)updateIsProgressing;
- (void)updateUnitBasedValues;
- (void)updateTimeBasedValues;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)description;
- (void)recordBytes:(unsigned int)fp8;
- (void)signalCancel:(id)fp8;
- (int)activityType;
- (void)setActivityType:(int)fp8;
- (double)estimatedTimeRemaining;
- (id)namePlural;
- (void)setNamePlural:(id)fp8;
- (id)nameSingular;
- (void)setNameSingular:(id)fp8;
- (id)status;
- (void)setStatus:(id)fp8;
- (BOOL)canCancel;
- (unsigned int)itemsTotal;
- (unsigned int)itemsDone;
- (float)unifiedDone;
- (BOOL)isProgressing;
- (float)rate;
- (float)progress;
- (id)bkItemDescription;
- (void)setBkItemDescription:(id)fp8;
- (BOOL)bkIsProgressing;

@end

