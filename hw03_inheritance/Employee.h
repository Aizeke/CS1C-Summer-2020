// Employee.h

#pragma once

#include "Date.h"
#include <iomanip>

// pre-conditions :
//
// post-condition : 

class Employee : public Date{

public:
	Employee();
	Employee(string name, string jobTitle, string phoneNum, char gender,
		int id, int age, string salary, int d, int m, int y);
	~Employee();

	// pre-conditions for Setters :
	//		Sets values using setters to user values;
	// post-conditions for Setters : 
	//		void functions that do not return only set values;

	void setJobTitle(string jobTitle);
	void setName(string name);
	void setPhoneNumber(string phoneNum);
	void setSalary(string salary);
	void setGender(char gender);
	void setAge(int age);
	void setId(int id);
	void setHireDate( int d, int m, int y);

	// pre-conditions for Getters :
	//		Gets values without changing the member value;
	// post-conditions for Setters : 
	//		returns corrisponding values without changing the current value;

	string getName() const;
	string getTitle() const;
	string getSalary() const;
	string getPhone() const;
	char getGender() const;
	int getID() const;
	int getAge() const;
	
	//Post-condition: Outputs
	//		Returns 
	void printEmployee()const;

	// Private values to use for an Employee
private:
	string employeeName;
	string jobTitle;
	string phoneNum;
	string salary;
	char employeeGender;
	int employeeId;
	int employeeAge;
	Date hiredDate;
};