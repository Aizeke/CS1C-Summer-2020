#include "Employee.h"

// Default Constructor sets all the values;
Employee::Employee() : hiredDate { 1, 1, 2000} {
	setName("Name");
	setJobTitle("Job Title");
	setPhoneNumber("XXX-XXX-XXXX");
	setGender('M');
	setId(0);
	setAge(0);
	setSalary("$0.00");
}

// Overloaded Constructor;
// Sets values passed in to private members;
Employee::Employee(string name, string job, string phone, char gender, int id, int age, string salary, int d, int m, int y)
	: hiredDate(d, m, y) 
{

	// Using Set Functions to Assign Member Values;
	setName(name);
	setJobTitle(job);
	setPhoneNumber(phone);
	setGender(gender);
	setId(id);
	setAge(age);
	setSalary(salary);
}

Employee::~Employee() {}

// Employee Class Setter Functions;

void Employee::setJobTitle(std::string job) { this->jobTitle = job; }

void Employee::setName(std::string name) { this->employeeName = name; }

void Employee::setPhoneNumber(std::string phone) { this->phoneNum = phone; }

void Employee::setSalary(string salary) { this->salary = salary; }

void Employee::setGender(char gender) { this->employeeGender = gender; }

void Employee::setAge(int age) { this->employeeAge = age; }

void Employee::setId(int id) { this->employeeId = id; }

void Employee::setHireDate(int d, int m, int y) { hiredDate.setDate(d, m, y); }

// Employee Class Getter Functions;

string Employee::getName() const { return employeeName; }

string Employee::getTitle() const { return jobTitle; }

string Employee::getSalary() const { return salary; }

string Employee::getPhone() const { return phoneNum; }

char Employee::getGender() const { return employeeGender; }

int Employee::getID() const { return employeeId; }

int Employee::getAge() const { return employeeAge; }

// Pring Employee Function;

void Employee::printEmployee() const
{
	cout << fixed << setprecision(2);
	cout << "EmpName: " << getName() << " EmpId: " << getID() << " " 
		 << "EmpPhoneNum: " << getPhone() << " EmpAge: " << getAge() << " " 
		 << "EmpGender: " << getGender() << " EmpTitle: " << getTitle() << " " 
		 << "EmpSalary: " << getSalary() << " HireDate: " << hiredDate.getDate();
}