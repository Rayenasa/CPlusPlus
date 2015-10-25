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

using namespace std;

class Actor
{
	public:
		/*
			defining the doYourThing() method as virtual and abstract
		*/
		virtual void doYourThing() = 0;
};

#endif