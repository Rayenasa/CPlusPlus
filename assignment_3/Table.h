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
		int tableNumber;
		int score;
		int randomTemp;
		int input;
		
		Table();
		Table(int tn);
		void print();
		int ready();
};

#endif