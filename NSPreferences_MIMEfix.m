//
//  NSPreferences_MIMEfix.m
//  MIMEfix
//
//  Created by Kobayashi Katsushi on 06/02/24.
//  Copyright 2006, 2009 Katsushi Kobayashi. All rights reserved.
//
//
// $Id: NSPreferences_MIMEfix.m,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//

#import "NSPreferences_MIMEfix.h"
#import "MIMEfixPreferences.h"
#import "MIMEfixbundle.h"
#import "MVMailBundle.h"

#import <objc/objc-runtime.h>

@interface NSPreferences (MIMEfixSwizzleSticks)
+ (id) sharedPreferencesForMIMEfix;
+ (id) sharedPreferencesFromAppKitSwizzledByMIMEfix;
@end

@implementation NSPreferences_MIMEfix
+ (void) load
{
	Class NSPreferencesClass = NSClassFromString(@"NSPreferences");
	NSAssert(NSPreferencesClass, @"Cannot get NSPreferencesClass");
	
	Method sharedPreferencesFromAppKit = class_getClassMethod(NSPreferencesClass, @selector(sharedPreferences));
	NSAssert(sharedPreferencesFromAppKit, @"Cannot get sharedPreferences method");

	Method sharedPreferencesFromAppKitFromMIMEfix = class_getClassMethod(self, @selector(sharedPreferencesFromAppKitSwizzledByMIMEfix));
	NSAssert(sharedPreferencesFromAppKit, @"Cannot get swizzled method");
	
	Method sharedPreferencesForMIMEfix = class_getClassMethod(self, @selector(sharedPreferencesForMIMEfix));			
	NSAssert(sharedPreferencesFromAppKit, @"Cannot get mimefix method");

	method_exchangeImplementations(sharedPreferencesFromAppKit, sharedPreferencesFromAppKitFromMIMEfix);
	method_exchangeImplementations(sharedPreferencesFromAppKit, sharedPreferencesForMIMEfix);

}
@end

@implementation NSPreferences (MIMEfixSwizzleSticks)
+ sharedPreferencesForMIMEfix
{
    static BOOL	added = NO;
    id	preferences = [self sharedPreferencesFromAppKitSwizzledByMIMEfix];

    if(preferences != nil && !added){
		[preferences addPreferenceNamed:[MIMEfixMailBundle preferencesPanelName] owner:[MIMEfixPreferences sharedInstance]];
        added = YES;
    }
    
    return preferences;
}
+ (id) sharedPreferencesFromAppKitSwizzledByMIMEfix {
	//Stub implementation to swizzle out.
	return nil;
}
@end
