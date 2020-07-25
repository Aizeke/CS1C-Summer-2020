#include "Software.h"

Software::Software() :Employee() {
	setDepartmentNum(0);
	setSupervisor("Pro. Kath");
	setPayRaise(0.0);
	setExperience(0);
}

// Overloaded Constructor;
Software::Software(string name, string job, string phone, char gender, 
			int id, int age, string salary, int d, int m, int y, 
			string supName, int departmentNum, double raise, int yrsExperience) 
			: Employee (name, job, phone, gender, id, age, salary, d, m, y) //MIA
{
	// Setting the overloaded constructor private member values
	// to user values;
	setDepartmentNum(departmentNum);
	setSupervisor(supName);
	setPayRaise(raise);
	setExperience(yrsExperience);
}

// Deconstructor

Software::~Software() {}

// Setters For Software Architect Class;

void Software::setSupervisor(string supervisor) { this->supervisor = supervisor; }

void Software::setDepartmentNum(int department) { this->departmentNum = department; }

void Software::setPayRaise(double raise) { this->raise = raise; }

void Software::setExperience(int experience) { this->yrsExperience = experience; }


// Getters For Software Architect Class;

string Software::getSupervisor() const { return supervisor; }

int Software::getDepartment() const { return departmentNum; }

double Software::getRaise() const { return raise; }

int Software::getExperience() const { return yrsExperience; }

// Software Architect Print Function;

void Software::printSoftwareArchitect() const
{
	Employee::printEmployee();

	cout << "\n\nDepartment Number: " << getDepartment() << "  "
		<< " Supervisor: " << getSupervisor()
		<< " Raise Increase: " << getRaise()
		<< " Year of Experience: " << getExperience()
		<< endl << endl;
}