//
//  NSPreferences_MIMEfix.m
//  MIMEfix
//
//  Created by Kobayashi Katsushi on 06/02/24.
//  Copyright 2006 Katsushi Kobayashi. All rights reserved.
//
//
// $Id: NSPreferences_MIMEfix.m,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//

#import "NSPreferences_MIMEfix.h"
#import "MIMEfixPreferences.h"
#import "MIMEfixbundle.h"

@implementation NSPreferences_MIMEfix
+ (void) load
{
    [NSPreferences_MIMEfix poseAsClass:[NSPreferences class]];
}

+ sharedPreferences
{
    static BOOL	added = NO;
    id	preferences = [super sharedPreferences];

    if(preferences != nil && !added){
		NSString* name = [MIMEfixMailBundle preferencesPanelName];
		[preferences addPreferenceNamed:name owner:[MIMEfixPreferences sharedInstance]];
        added = YES;
    }
    
    return preferences;
}
@end

