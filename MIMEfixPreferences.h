//
//  MIMEfixPreferences.h
//  MIMEfix
//
//  Created by Kobayashi Katsushi on 06/02/24.
//  Copyright 2006 Katsushi Kobayashi. All rights reserved.
//
//
// $Id: MIMEfixPreferences.h,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//

#import <Cocoa/Cocoa.h>
#import <NSPreferences.h>

@interface MIMEfixPreferences : NSPreferencesModule
{
    IBOutlet NSTextField	*versionTextField;
    IBOutlet NSTextField	*contactTextField;

    IBOutlet id enableMIMEfixButton;
}
- (IBAction)toggleMIMEfixEnable:(id)sender;
@end
