// Date.h
#pragma once

#include <iostream>
#include <string>

using namespace std;

// pre-conditions : Date Class contains month, day and year. Starting values are 0
//
// post-condition : Date has a 2 constructors, one sets all values to 0
// and the second sets user values to Date values; for use in MIL

class Date{

public:
	Date();
	Date(int d, int m, int y);
	~Date();
	//Setter Function to set the date;
	void setDate( int d, int m, int y );
	// Get function to printout the date;
	string getDate() const;

protected:
	int day;
	int month;
	int year;
};