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

#ifndef CyteKit_WebViewTableViewCell_H
#define CyteKit_WebViewTableViewCell_H

#include <UIKit/UIKit.h>

#include "CyteKit/WebView.h"

@interface CyteWebViewTableViewCell : UITableViewCell <
    CyteWebViewDelegate
>

+ (CyteWebViewTableViewCell *) cellWithRequest:(NSURLRequest *)request;
- (id) initWithRequest:(NSURLRequest *)request;

- (id) delegate;
- (void) setDelegate:(id)delegate;

@end

#endif//CyteKit_WebViewTableViewCell_H
