/**
    Assignment 3
    Table.cpp
    Purpose: prints out a random number table equation for the user
	and afterwards waits for the correct input.
	If correct inputs are == to 3 the user passes the test.
	if one mistake is made the score will be resetted back to 0.
	Questions are based on the tables from 1 to 10.

    @author Victor Wernet
    @version 1.0  8 october 2015
*/

#include "Table.h"

using namespace std;

/**
	Constructor with one parameter
*/
Table::Table(int tn)
{
	tableNumber = tn;
	equationAskedCountPerLine = new int[10];
	equationCorrectAnswerCountReachedThree = false;
	randomLine = 0;
	
	//set all the values in the array 0
	for (int i = 0; i <= 9; i++)
	{
		equationAskedCountPerLine[i] = 0;
	}
}

void Table::print()
{
	//Generate a randomLine
	randomLine = rand() % 10 + 1;	
	
	//print out the current score for this line
	cout << "\nCurrent score for equation: " << randomLine << "*" << tableNumber  << " is: "<< equationAskedCountPerLine[randomLine-1] << endl;
	
	//Ask the equation
	cout << "what is:" << endl;
	cout << randomLine << "*" << tableNumber << "= ?" << endl;
	
	//Save answer
	cin >> input;	
	
	if(input == (randomLine*tableNumber))
	{
		//keep count of how many times a certain equation line has been asked.
		if(equationAskedCountPerLine[randomLine-1] == 0)
		{
			equationAskedCountPerLine[randomLine-1] = 1;
		}
		
		else if(equationAskedCountPerLine[randomLine-1] == 1)
		{
			equationAskedCountPerLine[randomLine-1] = 2;
		}
		
		else
		{
			equationAskedCountPerLine[randomLine-1] = 3;
		}
		
		for(int i = 0; i <= 9; i++)
		{
			temp = equationAskedCountPerLine[i];
			
			if(temp == 3)
			{
				equationCorrectAnswerCountReachedThree = true;
			}
		}
	}
	
	else
	{
		//Put score to zero if answer is incorrect.
		equationAskedCountPerLine[randomLine-1] = 0;
	}
}

/**
	if an equation line has reached a score of 3 true will be returned.
*/
bool Table::ready()
{
	return equationCorrectAnswerCountReachedThree;
}

/**
 Deleting the dynamic allocation.
*/
void Table::deleteDynamicAllocation()
{
	delete[] equationAskedCountPerLine;
}