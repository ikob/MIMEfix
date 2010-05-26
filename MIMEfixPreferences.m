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
#ifdef DEBUG
	NSLog(@"MIMEfixPreferences preferencesNibName called");
#endif
    return @"MIMEfixPreference";
}

- viewForPreferenceNamed:(NSString *) aName {
	if(_preferencesView == nil) {
#ifdef DEBUG
		NSLog(@"MIMEfixPreferences viewForPreferenceNamed called ... loading nib");
#endif
		[NSBundle loadNibNamed:[self preferencesNibName] owner:self];
	}
	return _preferencesView;
}

- (NSImage *) imageForPreferenceNamed:(NSString *)aName
{
#ifdef DEBUG
	NSLog(@"MIMEfixPreferences Loading image %@", aName);
#endif
    return [NSImage imageNamed:@"MIMEfix"];
}

- titleForIdentifier:aName {
#ifdef DEBUG
	NSLog(@"MIMEfixPreferences titleForIdentifier");
#endif
    return @"MIMEfix";
}

- (BOOL)isResizable {
    return NO;
}

- (void) awakeFromNib
{
	[versionTextField setStringValue:[NSString stringWithFormat:@"%@", [[MIMEfixMailBundle sharedInstance] version]]];
	[contactTextField setStringValue:@"shikob@mac.com"];
}
- (void) initializeFromDefaults {
    MIMEfixMailBundle *mailBundle = [MIMEfixMailBundle sharedInstance];
#ifdef DEBUG
    NSLog(@"MIMEfixPreferences Init from default");
#endif
	[super initializeFromDefaults];
	[enableMIMEfixButton setState:([mailBundle isEnabled]?NSOnState:NSOffState)];
	[enableMIMEfixPreferName setState:([mailBundle isPreferName]?NSOnState:NSOffState)];
}
- (IBAction) toggleMIMEfixEnable:(id)sender
{
	[[MIMEfixMailBundle sharedInstance] setEnabled:([enableMIMEfixButton state] == NSOnState)];
}
- (IBAction) toggleMIMEfixPreferName:(id)sender
{
	[[MIMEfixMailBundle sharedInstance] setPreferName:([enableMIMEfixPreferName state] == NSOnState)];
}
@end