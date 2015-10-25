/**
    Assignment 4
    Shower.h
    Purpose: defining how the Shower class
	should look.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#ifndef SHOWER_H
#define SHOWER_H

#include "Actor.h"

using namespace std;

/*
	Virtual inheritance is there to solve double instances problem. 
	When you specify virtual when inheriting your classes, 
	you're telling the compiler that you only want a single 
	instance.
*/
class Shower : public virtual Actor
{
	public:
		string* message; 
	
		Shower();
		
		/*
			Defining the doYourThing() method derived from class
		*/
		void doYourThing();
		void deallocate();
};

#endif