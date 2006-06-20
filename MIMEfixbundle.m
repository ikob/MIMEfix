//
//  MIMEfixbundle.m
//  MIMEfix
//
//  Created by Kobayashi Katsushi on 06/02/21.
//  Copyright 2006 Katsushi Kobayashi. All rights reserved.
//
//
// $Id: MIMEfixbundle.m,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//

#import "MIMEfixPreferences.h"
#import "MIMEfixbundle.h"
#import "JMUtilities.h"

#import "base64.h"

static BOOL	MIMEfixWorks = YES;

@implementation MIMEfixMailBundle
+ (void) initialize
{
	NSBundle *myBundle;
	[super initialize];
	myBundle = [NSBundle bundleForClass:self];
	[(NSImage *)[[NSImage alloc] initByReferencingFile:[myBundle pathForImageResource:@"MIMEfix"]] setName:@"MIMEfix"];
	[self registerBundle];
	NSLog(@"Loaded MIMEfixMailBundle. %@", [[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
		stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"$"]]);
}

+ (BOOL) hasPreferencesPanel
{
//	NSLog(@"Has Preference.");
	return MIMEfixWorks;
}
+ (NSString *) preferencesOwnerClassName
{
//	NSLog(@"Respond Preference owner class name %@.", NSStringFromClass([MIMEfixPreferences class]));
    return NSStringFromClass([MIMEfixPreferences class]);
}
+ (BOOL) MIMEfixWorks
{
    return MIMEfixWorks;
}

- (BOOL) MIMEfixWorks
{
    return MIMEfixWorks;
}
+ (NSString *) preferencesPanelName {
    return @"MIMEfix";
}

- (NSString *) version
{
    return [[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
		stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"$"]];
}
- (BOOL) isEnabled {
    return [[NSUserDefaults standardUserDefaults] boolForKey:@"MIMEfixEnable"];
}
- (void) setEnabled:(BOOL) yesOrNo {
    [[NSUserDefaults standardUserDefaults] setBool:yesOrNo forKey:@"MIMEfixEnable"];
}
@end
