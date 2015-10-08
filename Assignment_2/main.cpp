/**
    Assignment 2
    main.cpp
    Purpose: Where the program first starts running
	after execution of the .exe 

    @author Victor Wernet
    @version 1.0 2 october 2015
*/


#include "Table.h"

using namespace std;

int main()
{
	//Creating an array of objects of size 10
	Table *table[10];
	int tn = 1;

	//Creating a loop to initialize the objects
	//dynamic variable "new"
	for(int i=0; i<10; i++)
	{
		table[i] = new Table(tn);
		
		//After creating the table print it out directly
		table[i]->print();

		//Delete the new
		delete table[i];
		tn++;
	}
	
	return 0;
}