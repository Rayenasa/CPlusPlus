/**
    Assignment 3
    Table.h
    Purpose: defining how the Table class
	should look and work.

    @author Victor Wernet
    @version 1.0  8 october 2015
*/

#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std; 

class Table
{
	public:
		int temp;
		int input;
		int tableNumber;
		int randomLine;
		int *equationAskedCountPerLine;
		bool equationCorrectAnswerCountReachedThree;
		
		Table(int tn);
		void print();
		bool ready();
		void deleteDynamicAllocation();
};

#endif