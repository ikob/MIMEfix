/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@interface (null) (PathUtils)
+ (id)pathWithDirectory:(id)arg1 filename:(id)arg2 extension:(id)arg3;
- (id)uniquePathWithMaximumLength:(unsigned long long)arg1;
- (BOOL)deletePath;
- (BOOL)isSubdirectoryOfPath:(id)arg1;
- (id)stringByReallyAbbreviatingWithTildeInPath;
- (id)betterStringByResolvingSymlinksInPath;
@end

