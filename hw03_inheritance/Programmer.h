// EMPLOYEE_H_

#pragma once

#include "Employee.h"

class Programmer : public Employee {

public:
	// Programmer Constructors
	Programmer();
	Programmer(string name, string job, string phone, char gender, int id, int age, string salary, int d, int m, int y, 
				int department, string supName, double salIncrease, bool cpp, bool java);
	~Programmer();


	// pre-conditions for Setters :
	//		Sets values using setters to user values;
	//		Sets Programmer values and no returning value;
	// post-conditions for Setters : 
	//		void functions that do not return only set values;
	void setDepartmentNum(int dpNum);
	void setSupervisor(string supervisor);
	void setPayRaise(double raise);
	void setCpp(bool cpp);
	void setJava(bool java);

	// pre-conditions for Getters :
	//		Gets values without changing the member value;
	// post-conditions for Setters : 
	//		returns corrisponding values without changing the current value;
	string getSupervisor() const;
	int getDepartment() const;
	double getRaise() const;
	bool getCppProgrammer() const;
	bool getJavaProgrammer() const;

	//Post-condition: Outputs
	//		Returns Programmer
	void printProgrammer()const;

	// Private member values used for Programmer;
private:
	string supervisor;
	int departmentNum;
	double raise;
	bool cpp;
	bool java;
};