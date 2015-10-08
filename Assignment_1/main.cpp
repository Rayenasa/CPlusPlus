/**
    Assignment 1
    Age.cpp
    Purpose: Where the program starts running
	after execution of the .exe

    @author Victor Wernet
    @version 1.0 18 september 2015
*/

#include <cstdlib>
#include "age.h"

using namespace std;

int main()
{
	//Creating an object
	Age age;
	
	//calling the function in age
	age.askAge();
	
	system("PAUSE");
	
	return 0;
}