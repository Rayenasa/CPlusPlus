/**
    Assignment 3
    main.cpp
    Purpose: Where the program first starts running
	after execution of the .exe 

    @author Victor Wernet
    @version 1.0 8 october 2015
*/

#include "Table.h"

using namespace std;

const int MAX_LENGTH = 5;

int main()	
{	
	//initialize random seed every time the program runs
	srand (time(NULL));
	
	//Creating an array of objects of size 10
	Table *table[10];
	
	//other variables
	int loopThroughArrayToCheckIfScoreIsNotThree = 0, 
		t = 1, 
		randomNumber, 
		score = 0;

	//Creating a loop to initialize the objects
	//dynamic variable "new"
	for(int i=0; i<=9; i++)
	{
		table[i] = new Table(t);
		t++;
	}
	
	//reset value so that i can be reused
	t = 0;
	
	while(score!=3)
	{
		//random number between 0 and 9 index
		randomNumber = rand() % 10;
	
		//print out the score
		cout << "\nCurrent score: " << score << endl;
	
		//ask calculation question
		table[randomNumber]->print();
		
		//check to see if the current table has a score, if so
		//increment the score;
		if(table[randomNumber]->ready()!=0)
		{
			score++;
			t = 0;
			
			if(score==3)
			{
				cout <<"\nCongratulations you passed!" << endl;
			}
		}
	
		//otherwise reset the value to zero.
		else
		{
			score = 0;
			t++;
			
			if(t==MAX_LENGTH)
			{
				cout << "\nAww you'll do better next time!" << endl;
				score = 3;
			}
		}
	}
	
	for(int i = 0; i <= 9; i++)
	{
		delete table[i];
	}
	
	return 0;
}