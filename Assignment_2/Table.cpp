/**
    Assignment 2
    Table.cpp
    Purpose: prints out the table of 1 to 10

    @author Victor Wernet
    @version 1.0 2 october 2015
*/

#include "Table.h"

using namespace std;

/**
	Constructor
*/
Table::Table(int tn)
{
	tableNumber = tn;
}

//Print out the corresponding table number
void Table::print()
{
	cout << "\nTable of " << tableNumber << endl;
	cout << "---------------" << endl;
	
	for(int i = 0; i<=10; i++)
	{
		if(i!=0)
		{
			cout << i << "*" << tableNumber << "= " << i*tableNumber << endl;
		}
	}
}