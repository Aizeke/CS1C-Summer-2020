#include "Programmer.h"

// Default Constructors,
// Calls Employee's Default Constructor As Well;
Programmer::Programmer() :Employee() {
	setDepartmentNum(0);
	setSupervisor("Pro. Kath");
	setPayRaise(0.0);
	setCpp(0);
	setJava(0);
}

// Overload The Constructor;
Programmer::Programmer(string name, string job, string phone, char gender,
	int id, int age, string salary, int d, int m, int y, int department, string supName, double salIncrease, bool cpp, bool java)
	// MIL
	: Employee (name, job, phone, gender, id, age, salary, d, m ,y)
{
	// Using Set Functions to Assing to Private Member Values;
	setDepartmentNum( department );
	setSupervisor( supName );
	setPayRaise( salIncrease );
	setCpp( cpp );
	setJava( java );
}

// Deconstructor

Programmer::~Programmer() {}

// Setters For Programmer Class;

void Programmer::setDepartmentNum(int dpNum) { this->departmentNum= dpNum; }

void Programmer::setSupervisor(string supervisor) { this->supervisor = supervisor; }

void Programmer::setPayRaise(double raise) { this->raise = raise; }

void Programmer::setCpp(bool cpp) { this->cpp = cpp; }

void Programmer::setJava(bool java) { this->java = java; }

// Getters For Programmer Class;

string Programmer::getSupervisor() const { return supervisor; }

int Programmer::getDepartment() const { return departmentNum; }

double Programmer::getRaise() const { return raise; }

bool Programmer::getCppProgrammer() const { return cpp; }

bool Programmer::getJavaProgrammer() const { return java; }

// Programmer Print Funcction;

void Programmer::printProgrammer() const
{
	Employee::printEmployee();

	cout <<  "\n\nDepartment Number: " << getDepartment() 
		 << " Supervisor: " << getSupervisor()
		 << " Raise Increase: " << getRaise();

	if (getCppProgrammer()) cout << " Knowledge of C++ ";
	else cout << " Not A C++ Programmer ";

	if (getJavaProgrammer()) cout << " Knowledge of Java\n\n";
	else cout << " Not A Java Programmer\n\n";
}

bool operator==(Programmer & phone1, Employee & phone2)
{
	return phone1.getPhone() == phone2.getPhone();
}