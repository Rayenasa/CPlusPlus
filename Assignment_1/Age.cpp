/**
    Assignment 1
    Age.cpp
    Purpose: Asks for your age and gives an answer
	equivalent to your input.

    @author Victor Wernet
    @version 1.0 18/09/15
*/

#include "Age.h"

using namespace std;

//When called it will ask your for you age
void Age::askAge()
{
	cout << "How old are you?" << endl;
	cin >> age;

	if(age > 0 && age < 18)
	{
		cout << "You are still a child!" << endl;
	}

	else if(age > 17 && age < 25)
	{
		cout << "You are still a young adult!" << endl;
	}

	else
	{
		cout << "Are you married by any chance? :D" << endl;
	}
}
