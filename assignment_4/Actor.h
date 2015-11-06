/**
    Assignment 4
    Actor.h
    Purpose: defining how the Actor class
	should look.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#ifndef ACTOR_H
#define ACTOR_H

#include <stdlib.h>  /* srand, rand */
#include <time.h>	/* time */
#include <iostream>
#include <windows.h>

using namespace std;

class Actor
{
	public:
	
		virtual void start() = 0;
		virtual void end() = 0;
		void doYourThing();
};

#endif