/**
    Assignment 2
    Table.h
    Purpose: defining how the Table class
	should look and work.

    @author Victor Wernet
    @version 1.0 02/09/15
*/

#ifndef TABLE_H
#define TABLE_H

#include <iostream>

using namespace std;

class Table
{
	public:
		Table(int tn);
		void print();
		int tableNumber;
};

#endif 