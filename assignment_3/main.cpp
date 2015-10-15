/**
    Assignment 3
    main.cpp
    Purpose: Where the program first starts running
	after execution of the .exe 

    @author Victor Wernet
    @version 1.0  8 october 2015
*/

#include "Table.h"

using namespace std;

const int MAX_AMOUNT = 5;

int main()	
{	
	//initialize random seed every time the program runs
	srand (time(NULL));
	
	//Creating an array of objects of size 10
	Table *table[10];
	
	//other variables
	int t = 1, randomTable, counter = 0;

	//Creating a loop to initialize the objects
	//dynamic variable "new"
	for(int i=0; i<=9; i++)
	{
		table[i] = new Table(t);
		t++;
	}
	
	while(table[randomTable]->ready()!=true && counter != 5)
	{
		//random number between 0 and 9 index
		randomTable = rand() % 10;
	
		//ask calculation question
		table[randomTable]->print();
			
		//keep count of the amount of equation question that has been asked
		counter++;
				
		if(counter==MAX_AMOUNT)
		{
			cout << "\nAmount of questions allowed reached" << endl;
		}
	}
	
	cout <<"\nTest done :)" << endl;
	
	//Delete all dynamic allocation, otherwise memory leak
	for(int i = 0; i <= 9; i++)
	{
		table[i]->deleteDynamicAllocation();
		
		delete table[i];
	}
	
	return 0;
}