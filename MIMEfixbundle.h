//
//  MIMEfixbundle.h
//  test
//
//  Created by Kobayashi Katsushi on 06/02/21.
//  Copyright 2006 Katsushi Kobayashi. All rights reserved.
//
// $Id: MIMEfixbundle.h,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
//

#import <Cocoa/Cocoa.h>

#import <MVMailBundle.h>

@interface MIMEfixMailBundle : MVMailBundle
+ (BOOL) MIMEfixWorks;
- (BOOL) MIMEfixWorks;
- (BOOL) isEnabled;
- (void) setEnabled:(BOOL)flag;
@end
