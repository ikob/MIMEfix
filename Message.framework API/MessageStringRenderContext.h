/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class JunkRecorder, NSMutableString, NSSet;

@interface MessageStringRenderContext
{
    NSSet *_URLs;
    NSSet *_imageURLs;
    JunkRecorder *_junkRecorder;
    int _mode;
    NSMutableString *_buffer;
    BOOL _updateBodyFlags;
    long long _imageCount;
    long long _characterCount;
}

@property(retain) NSMutableString *buffer; // @synthesize buffer=_buffer;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSMutableString",&,V_buffer,P

@property BOOL updateBodyFlags; // @synthesize updateBodyFlags=_updateBodyFlags;
@property(readonly) int mode; // @synthesize mode=_mode;
@property(retain) NSSet *imageURLs; // @synthesize imageURLs=_imageURLs;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSSet",&,V_imageURLs,P

@property(retain) NSSet *URLs; // @synthesize URLs=_URLs;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSSet",&,V_URLs,P

@property long long characterCount; // @synthesize characterCount=_characterCount;
@property long long imageCount; // @synthesize imageCount=_imageCount;
@property(retain) JunkRecorder *junkRecorder; // @synthesize junkRecorder=_junkRecorder;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"JunkRecorder",&,V_junkRecorder,P


- (id)initForMode:(int)arg1;
- (id)renderString;
- (void)dealloc;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (BOOL)updateBodyFlags;
- (void)setUpdateBodyFlags:(BOOL)arg1;
- (int)mode;
- (id)imageURLs;
- (void)setImageURLs:(id)arg1;
- (id)URLs;
- (void)setURLs:(id)arg1;
- (long long)characterCount;
- (void)setCharacterCount:(long long)arg1;
- (long long)imageCount;
- (void)setImageCount:(long long)arg1;
- (id)junkRecorder;
- (void)setJunkRecorder:(id)arg1;

@end
