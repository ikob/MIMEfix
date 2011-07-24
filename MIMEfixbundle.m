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

NSBundle *GetMyMVMailBundle(void) {
	return [NSBundle bundleForClass:[MIMEfixMailBundle class]];
}

@implementation MIMEfixMailBundle
+ (void) initialize
{
#if 1
#ifdef DEBUG
	NSLog(@"Loading Bundle.");
#endif
	[super initialize];
	Class mvMailBundleClass = NSClassFromString(@"MVMailBundle");
	class_setSuperclass([self class], mvMailBundleClass);
	NSImage *image = [[NSImage alloc] initByReferencingFile:[GetMyMVMailBundle() pathForImageResource:@"MIMEfix"]];
	[image setName:@"MIMEfix"];
	[MIMEfixMailBundle registerBundle];
#else
	NSBundle *myBundle;
	[super initialize];
	myBundle = [NSBundle bundleForClass:self];
	[(NSImage *)[[NSImage alloc] initByReferencingFile:[myBundle pathForImageResource:@"MIMEfix"]] setName:@"MIMEfix"];
	[self registerBundle];
#endif
#ifdef DEBUG
	NSLog(@"Loaded MIMEfixMailBundle. (DEBUG) %@", [[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
											stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"$"]]);
#else
	NSLog(@"Loaded MIMEfixMailBundle. %@", [[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
		stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"$"]]);
#endif
#if 0
	NSDictionary* infoDictionary = [[NSBundle bundleForClass:[self class]] infoDictionary];
	NSLog(@"%i Keys:  %@", [infoDictionary count], [infoDictionary allKeys]);
#endif
}

+ (BOOL) hasPreferencesPanel
{
#ifdef DEBUG
	NSLog(@"Has Preference.");
#endif
	return MIMEfixWorks;
}
+ (NSString *) preferencesOwnerClassName
{
#ifdef DEBUG
	NSLog(@"Respond Preference owner class name %@.", NSStringFromClass([MIMEfixPreferences class]));
#endif
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
- (BOOL) isPreferName {
    return [[NSUserDefaults standardUserDefaults] boolForKey:@"MIMEfixPreferName"];
}
- (void) setPreferName:(BOOL) yesOrNo {
    [[NSUserDefaults standardUserDefaults] setBool:yesOrNo forKey:@"MIMEfixPreferName"];
}
@end
