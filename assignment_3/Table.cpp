/**
    Assignment 3
    Table.cpp
    Purpose: prints out a random number table equation for the user
	and afterwards waits for the correct input.
	If correct inputs are == to 3 the user passes the test.
	if one mistake is made the score will be resetted back to 0.
	Questions are based on the tables from 1 to 10.

    @author Victor Wernet
    @version 1.0 8 october 2015
*/

#include "Table.h"

using namespace std;

/**
	Constructor with one parameter
*/
Table::Table(int tn)
{
	tableNumber = tn;
	score = 0;
}

void Table::print()
{
	randomTemp = rand() % 10 + 1;
	
	cout << "what is:" << endl;
	cout << randomTemp << "*" << tableNumber << "= ?" << endl;
	
	cin >> input;
	
	if(input == (randomTemp * tableNumber))
	{
		cout << "Correct!" << endl;
		score = 1;
	}
	
	else
	{
		cout << "Incorrect. Correct answer = " << (randomTemp * tableNumber) << endl;
		score = 0;
	}
}

int Table::ready()
{
	return score;
}