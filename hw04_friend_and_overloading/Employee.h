// Employee.h

#pragma once

#include "Date.h"
#include <iomanip>

class Employee : public Date{

	// pre-conditions:
	//		Takes in Type Employee;
	// post-conditions: 
	//		Returns Type Output and Input Stream;
	friend ostream& operator<<(ostream& output, Employee& employee);
	friend istream& operator>>(istream& input, Employee& employee);

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

	void addAge(int a);
	
	//Post-condition: Outputs
	//		Returns 
	void printEmployee()const;

	// pre-conditions :
	//		Compares Two Employee Class;
	// post-condition :
	//		Returns true of false;
	bool operator==(Employee& e);

	// pre-conditions :
	//		Overloads the Addition Operator;
	// post-condition :
	//		Adds ;
	void operator+(int i);

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