/**
    Assignment 4
    Beeper.cpp
    Purpose: This class will make a beeping sound. This beep
	will have a unique pitch and length. The pitch and length
	are randomly selected from the arrays.

    @author Victor Wernet
    @version 1.0  26 october 2015
*/

#include "Beeper.h"

using namespace std;

Beeper::Beeper()
{
	pitch = new int[5];
	time = new int[5];
	
	for(int p = 0; p <= 5; p++)
	{
		pitch[p] = 420 + p;
		time[p] = 1000 * (p + 1); 
	}
}

void Beeper::start()
{
	Beep(pitch[rand() % 5], time[rand() % 5]);
}

void Beeper::end()
{
	delete[] pitch, time;
}