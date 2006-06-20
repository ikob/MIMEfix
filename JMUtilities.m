//
//  JMUtilities.m
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

#import "JMUtilities.h"


const char hex[] = "0123456789abcdef";


void bin2hex (const unsigned char *hash, unsigned char *buf, unsigned len) {
    unsigned i;
    
    for (i = 0; i != len; ++i) {
        buf[i+i] = hex[hash[i] >> 4];
        buf[i+i+1]  = hex[hash[i] & 0x0f];
    }
}

NSString *resolveAliasFromFile (const NSString *path) {
    NSString *ret = nil;
    CFURLRef url = CFURLCreateWithFileSystemPath(NULL, (CFStringRef) path, 
                                                 kCFURLPOSIXPathStyle, NO);
    if (url) {
        FSRef fsRef;
        if (CFURLGetFSRef(url, &fsRef)) {
            Boolean targetIsFolder, wasAliased;
            if (FSResolveAliasFile (&fsRef, true, &targetIsFolder, &wasAliased) == noErr
                && wasAliased) {
                CFURLRef resolvedUrl = CFURLCreateFromFSRef(NULL, &fsRef);
                if(resolvedUrl) {
                    ret = [(NSURL *) resolvedUrl path];
                    CFRelease(resolvedUrl);
                }
            }
        }
        CFRelease(url);
    }
    
    return ret;
}

IMP replaceClassMethod (SEL aSelector, Class aClass, SEL newSelector, Class newClass) {
    Method aMethod, newMethod;
    IMP anIMP;
    
    aMethod = class_getClassMethod(aClass, aSelector);
    newMethod = class_getClassMethod(newClass, newSelector);
    
    if (NULL != aMethod && NULL != newMethod) {
        anIMP = aMethod->method_imp;
        aMethod->method_imp = newMethod->method_imp;
        
        return anIMP;
    }
    
    return NULL;
}

IMP replaceInstanceMethod (SEL aSelector, Class aClass, SEL newSelector, Class newClass) {
    Method aMethod, newMethod;
    IMP anIMP;
    
    aMethod = class_getInstanceMethod(aClass, aSelector);
    newMethod = class_getInstanceMethod(newClass, newSelector);
    
    if (NULL != aMethod && NULL != newMethod) {
        anIMP = aMethod->method_imp;
        aMethod->method_imp = newMethod->method_imp;
        
        return anIMP;
    }
    
    return NULL;
}

// Inserts menuItem to menu (or one of its submenus) under the item whose action 
// is underItemSelector.  Returns YES if insertion is successful.
BOOL addMenuItem (NSMenuItem *menuItem, NSMenu *menu, SEL underItemSelector) {
    NSMenuItem *item;
    NSArray *items = [menu itemArray];
    int i;
    
    for(i = 0; i < [items count]; i++) {
        item = [items objectAtIndex:i];
        
        if([item action] == underItemSelector) {
            [menu insertItem:menuItem atIndex:i + 1];
            return YES;
        }
        else if([[item target] isKindOfClass:[NSMenu class]]) {
            if (addMenuItem(menuItem, [item target], underItemSelector))
                return YES;
        }
    }
    
    return NO;
}

// Inserts a menu separator item to menu (or one of its submenus) under the 
// item whose action is underItemSelector.  Returns YES if insertion is successful.
BOOL addMenuSeparator (NSMenu *menu, SEL underItemSelector) {
    return addMenuItem((NSMenuItem *)[NSMenuItem separatorItem], menu, underItemSelector);
}

// Inserts a new menu item with title, action and keyEquivalent to menu (or one of
// its submenus) under the item whose action is underItemSelector.  Returns the new 
// addition or nil if no such item could be found.
NSMenuItem *addMenuItemWithSpecifics (NSString *title, SEL action, 
                                      NSString *keyEquivalent, NSMenu *menu, 
                                      SEL underItemSelector) {
    if(!keyEquivalent)
        keyEquivalent = @"";

    NSMenuItem *menuItem = [[[NSMenuItem alloc] initWithTitle:title 
                                                       action:action 
                                                keyEquivalent:keyEquivalent] autorelease];
    
    if (addMenuItem(menuItem, menu, underItemSelector))
        return menuItem;
    else
        return nil;
}

/* BOOL isJunkMailbox (MailboxUid *uid) {
    BOOL isSpecial = [uid isSpecialMailboxUid];
    int type = [uid type];
    
    // if a MailboxUid is special: type 105 is junk
    // otherwise: type 1 is junk
    return ((isSpecial && type == 105) || (!isSpecial && type == 1));
} */
