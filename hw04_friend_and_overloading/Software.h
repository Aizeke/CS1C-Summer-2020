// SOFTWARE_H_

#pragma once

#include "Employee.h"

class Software : public Employee {

public: 
	// Programmer Constructors
	Software();
	Software(string name, string job, string phone, char gender, int id, int age, string salary, int d, int m, int y, 
			 string supName, int departmentNum, double raise, int yrsExperience);
	~Software();

	// pre-conditions for Setters :
	//		Sets values using setters to user values;
	//		Sets Software Architect values and no returning value;
	// post-conditions for Setters : 
	//		void functions that do not return only set values;
	void setDepartmentNum(int dpNum);
	void setSupervisor(string supervisor);
	void setPayRaise(double raise);
	void setExperience(int numYrs);

	// pre-conditions for Getters :
	//		Gets values without changing the member value;
	// post-conditions for Setters : 
	//		returns corrisponding values without changing the current value;
	string getSupervisor() const;
	int getDepartment() const;
	double getRaise() const;
	int getExperience() const;

	//Post-condition: Outputs
	//		Returns Software Architect
	void printSoftwareArchitect()const;

	// Private member values used for Software Architect
private:
	string supervisor;
	int departmentNum;
	int yrsExperience;
	double raise;
};
