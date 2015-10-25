/**
    Assignment 4
    Shower.cpp
    Purpose: This class will print out a random selected
	message from the array and afterwards printing the message
	out.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#include "Shower.h"

using namespace std;

Shower::Shower()
{
	message = new string[5];
	
	message[0] = "I love acting";
	message[1] = "Acting is my passion";
	message[2] = "To do or no to do";
	message[3] = "What is my line again??";
	message[4] = "Jingle bells, Jingle bells";
}
/*
	Declaring the doYourThing() method derived from class Actor
	This will make the Actor say a text with a unique text.
*/
void Shower::doYourThing()
{
	cout << message[rand() % 5] << endl;
	
	deallocate();
}

void Shower::deallocate()
{
	delete[] message;
}