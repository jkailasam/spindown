/**
* Spindown is a daemon that can spindown idle discs.
* Copyright (C) 2008-2009 Dimitri Michaux <dimitri.michaux@gmail.com>
*
* main.cpp:
* Initializes the Spindown object, configures it and then runs the main
* loop.
* 
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* 
* http://www.gnu.org/licenses/gpl.html
* 
* Contact: Dimitri Michaux <dimitri.michaux@gmail.com>
*/

#include <iostream>

using namespace std;

#include "spindownd.h"
#include "exceptions.h"

int main( int argc, char* argv[] )
{
	try
	{
		Spindownd::init(argc,argv);
		Spindownd::run();
	}

	catch(SpindownException e)
	{
		cerr << "SpindownException: "<< e.message << endl;

		return 1;
	}

    return 0;
}
