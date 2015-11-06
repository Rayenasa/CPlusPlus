/**
    Assignment 4
    main.cpp
    Purpose: Where the program first starts running
	after execution of the .exe 

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#include "Actor.h"
#include "Annoyer.h"
#include "Shower.h"
#include "Beeper.h"

using namespace std;

int main()
{
	//initialize random seed every time the program runs
	srand (time(NULL));
	
	//creating an aray of pointers to Actor
	Actor** actor = new Actor*[10];
	
	//instances
	actor[0] = new Shower();
	actor[1] = new Beeper();
	actor[2] = new Annoyer();

	actor[0]->doYourThing();
	actor[1]->doYourThing();
	actor[2]->doYourThing();
	
	/*
		Delete them after usage, otherwise it can create memory leak
		in bigger programs.
	*/
	
	for(int i = 0; i <= 2; i++)
	{
		delete actor[i];
	}
	
	delete[] actor;
	
	return 0;
}