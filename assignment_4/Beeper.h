/**
    Assignment 4
    Beeper.h
    Purpose: defining how the Beeper class
	should look.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#ifndef BEEPER_H
#define BEEPER_H

#include "Actor.h"

using namespace std;

/*
	Virtual inheritance is there to solve double instances problem. 
	When you specify virtual when inheriting your classes, 
	you're telling the compiler that you only want a single 
	instance.
*/
class Beeper : public virtual Actor
{
	public:
		int* pitch;
		int* time;
		
		Beeper();
		void start();
		void end();
};

#endif