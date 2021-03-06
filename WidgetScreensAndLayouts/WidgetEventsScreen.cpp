/*
Copyright (C) 2012 MoSync AB

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License,
version 2, as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA.
*/

/**
 * WidgetEventsScreen.cpp
 *
 *  Created on: Sept 3, 2012
 *      Author: Spiridon Alexandru
 */

#include "WidgetEventsScreen.h"

/**
 * Constructor.
 */
WidgetEventsScreen::WidgetEventsScreen():
	Screen()
{
	createMainLayout();
}

/**
 * Destructor.
 */
WidgetEventsScreen::~WidgetEventsScreen()
{

}

/**
 * Creates and adds main layout to the screen.
 */
void WidgetEventsScreen::createMainLayout()
{
	mMainLayout = new VerticalLayout();
	setMainWidget(mMainLayout);
}

/**
 * Sets the screen layout.
 */
void WidgetEventsScreen::setMainLayout(Layout* layout)
{
	delete mMainLayout;
	mMainLayout = layout;
	setMainWidget(mMainLayout);
}
