/**
    Assignment 2
    Table.cpp
    Purpose: prints out the table of 1 to 10

    @author Victor Wernet
    @version 1.0 25/09/15
*/

#include "Table.h"

using namespace std;

/**
	Constructor
*/
Table::Table()
{
	cout << "Printing out the tables from 1 to 10" << endl;
	
	//Table starting at 1 
	tableNumber = 1;
	
	//This loops every time the inner loop breaks out. Creating an automatic 1 to 10 table
	for(int loopThroughTableOneToTen = 1; loopThroughTableOneToTen <= 10; loopThroughTableOneToTen++) 
	{
		for(int loopThroughTable = 1; loopThroughTable<=10; loopThroughTable++)
		{
			cout << tableNumber << "*" << loopThroughTable << "= " << tableNumber*loopThroughTable << endl;
			
			//change the table number to the next table, thus first table of 1 
			//afterwards table of 2 etc.
			if(loopThroughTable>=10)
			{
				tableNumber++;
				
				cout << "\n" << endl;
			}
		}
    }
}