/**
    Assignment 4
    Annoyer.cpp
    Purpose: will make a beeping noise and print out a text 
	at the same time. This is the child class of Shower and Beeper.
	Their doYourThing() function is called.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#include "Annoyer.h"

using namespace std;

/*
	Call the doYourThing() method of Beeper and Shower.
	This will make the Actor beep and say a text.
*/
void Annoyer::doYourThing()
{
	Shower::doYourThing();
	Beeper::doYourThing();
}