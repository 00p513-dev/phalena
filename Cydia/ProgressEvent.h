/* Phalena - iPhone UIKit Front-End for Debian APT
 * Copyright (C) 2008-2015  Jay Freeman (saurik)
*/

/* GNU General Public License, Version 3 {{{ */
/*
 * Phalena is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published
 * by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * Phalena is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Phalena.  If not, see <http://www.gnu.org/licenses/>.
**/
/* }}} */

#ifndef Phalena_ProgressEvent_H
#define Phalena_ProgressEvent_H

#include <Foundation/Foundation.h>

#include <apt-pkg/acquire.h>

@interface PhalenaProgressEvent : NSObject {
    _H<NSString> message_;
    _H<NSString> type_;

    _H<NSArray> item_;
    _H<NSString> package_;
    _H<NSString> url_;
    _H<NSString> version_;
}

+ (PhalenaProgressEvent *) eventWithMessage:(NSString *)message ofType:(NSString *)type;
+ (PhalenaProgressEvent *) eventWithMessage:(NSString *)message ofType:(NSString *)type forPackage:(NSString *)package;
+ (PhalenaProgressEvent *) eventWithMessage:(NSString *)message ofType:(NSString *)type forItemDesc:(pkgAcquire::ItemDesc &)desc;

- (id) initWithMessage:(NSString *)message ofType:(NSString *)type;

- (NSString *) message;
- (NSString *) type;

- (NSArray *) item;
- (NSString *) package;
- (NSString *) url;
- (NSString *) version;

- (void) setItem:(NSArray *)item;
- (void) setPackage:(NSString *)package;
- (void) setURL:(NSString *)url;
- (void) setVersion:(NSString *)version;

- (NSString *) compound:(NSString *)value;
- (NSString *) compoundMessage;
- (NSString *) compoundTitle;

@end

@protocol ProgressDelegate
- (void) addProgressEvent:(PhalenaProgressEvent *)event;
- (void) setProgressPercent:(NSNumber *)percent;
- (void) setProgressStatus:(NSDictionary *)status;
- (void) setProgressCancellable:(NSNumber *)cancellable;
- (bool) isProgressCancelled;
- (void) setTitle:(NSString *)title;
@end

#endif//Phalena_ProgressEvent_H
