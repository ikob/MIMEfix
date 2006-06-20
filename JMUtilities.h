//
//  JMUtilities.h
//  JunkMatcher
//
//  Created by Benjamin Han on 1/30/05.
//  Copyright 2005 and onwards Benjamin Han. All rights reserved.
//

/*
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or (at
 your option) any later version.
 
 This program is distributed in the hope that it will be useful, but
 WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 USA.
 */

#import <Cocoa/Cocoa.h>
#import <objc/objc-class.h>
// #import <MailboxUid.h>

void bin2hex (const unsigned char *hash, unsigned char *buf, unsigned len);

NSString *resolveAliasFromFile (const NSString *path);

IMP replaceClassMethod (SEL aSelector, Class aClass, SEL newSelector, Class newClass);

IMP replaceInstanceMethod (SEL aSelector, Class aClass, SEL newSelector, Class newClass);

BOOL addMenuItem (NSMenuItem *menuItem, NSMenu *menu, SEL underItemSelector);

NSMenuItem *addMenuItemWithSpecifics (NSString *title, SEL action, 
                                      NSString *keyEquivalent, NSMenu *menu, 
                                      SEL underItemSelector);

// BOOL isJunkMailbox (MailboxUid *uid);
