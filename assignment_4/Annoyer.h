/**
    Assignment 4
    Annoyer.h
    Purpose: defining how Annoyer class
	should look.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#ifndef ANNOYER_H
#define ANNOYER_H

#include "Beeper.h"
#include "Shower.h"

using namespace std;

class Annoyer : public Shower, public Beeper
{
	public:
		/*
			When you construct the derived class, a constructor of 
			base class must be called as well. And since your base 
			class (Beeper and Shower) doesn't provide the default constructor,
			the compiler doesn't know which one of the constructors 
			should be used. In this case, you need to call the 
			constructor explicitly. 
			
			Annoyer() : Beeper(0,0), Shower("",0){}
		*/
		void doYourThing();
};

#endif
