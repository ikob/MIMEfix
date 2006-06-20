//
//  MIMEPartPreferences.m
//  MIMEfix
//
//  Created by Kobayashi Katsushi on 06/02/24.
//  Copyright 2006 Katsushi Kobayashi. All rights reserved.
//
//
// $Id: MIMEfixPreferences.m,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//


#import "MIMEfixPreferences.h"
#import "MIMEfixbundle.h"

@implementation MIMEfixPreferences

- preferencesNibName {
//	NSLog(@"MIMEfixPreferences preferencesNibName called");
    return @"MIMEfixPreference";
}

- viewForPreferenceNamed:(NSString *) aName {
	if(_preferencesView == nil) {
//		NSLog(@"MIMEfixPreferences viewForPreferenceNamed called ... loading nib");
		[NSBundle loadNibNamed:[self preferencesNibName] owner:self];
	}
	return _preferencesView;
}

- (NSImage *) imageForPreferenceNamed:(NSString *)aName
{
//	NSLog(@"MIMEfixPreferences Loading image %@", aName);
    return [NSImage imageNamed:@"MIMEfix"];
}

- titleForIdentifier:aName {
//	NSLog(@"MIMEfixPreferences titleForIdentifier");
    return @"MIMEfix";
}

- (BOOL)isResizable {
    return NO;
}

- (void) awakeFromNib
{
	[versionTextField setStringValue:[NSString stringWithFormat:@"%@", [[MIMEfixMailBundle sharedInstance] version]]];
	[contactTextField setStringValue:@"ikob@koganei.wide.ad.jp"];
}
- (void) initializeFromDefaults {
    MIMEfixMailBundle *mailBundle = [MIMEfixMailBundle sharedInstance];
//    NSLog(@"MIMEfixPreferences Init from default");
	[super initializeFromDefaults];
	[enableMIMEfixButton setState:([mailBundle isEnabled]?NSOnState:NSOffState)];
}
- (IBAction) toggleMIMEfixEnable:(id)sender
{
	[[MIMEfixMailBundle sharedInstance] setEnabled:([enableMIMEfixButton state] == NSOnState)];
}
@end