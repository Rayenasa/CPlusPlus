/**
    Assignment 4
    Actor.cpp
    Purpose: This class is made abstract. This class will
	be used as an interface for other child classes.
	This class is the parent class.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#include "Actor.h"

using namespace std;

/*
	Declaring the doYourThing() method as empty. 
	Actor can not be initiated as an object
*/
void Actor::doYourThing()
{
	start();
	end();
}

void Actor::start(){}

void Actor::end(){}

