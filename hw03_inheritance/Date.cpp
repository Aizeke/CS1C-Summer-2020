#include "Date.h"

Date::Date() { day = 0; month = 0; year = 0; }

Date::Date(int d, int m, int y) { this->day = d; this->month = m; this->year = y; }

Date::~Date() {}

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

string Date::getDate() const { 
	string dateToString = to_string(month) + '/' + to_string(day) + '/' + to_string(year);
	return dateToString; }
