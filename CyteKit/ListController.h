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

#ifndef CyteKit_ListController_H
#define CyteKit_ListController_H

#include <UIKit/UIKit.h>

#include <CyteKit/ViewController.h>

@interface CyteListController : CyteViewController

- (id) initWithTitle:(NSString *)title;

- (bool) shouldYield;
- (void) loadView;
- (void) _reloadData;
- (void) resetCursor;
- (void) clearData;
- (CGFloat) rowHeight;

@end

#endif//CyteKit_ListController_H
