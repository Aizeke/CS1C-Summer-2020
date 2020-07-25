/*************************************************************************
* AUTHOR     : Isaac Guido
* HW #1      : Class Constructors, Inheritance & Init
* CLASS      : CS 1C 3pm - 5:20pm
* DUE DATE   : June 16th, 2020
*************************************************************************/

#include "Programmer.h"
#include "Software.h"

using namespace std;

int main()
{
	// Create at least one “employee” object with the default constructor;
	Employee employee0;

	// Create at least one “employee” object with the non-default constructor;
	Employee employee1("Jimmy Fallon", "Comedian", "949-555-1234", 'M', 12345, 40,
		"$100,000", 8, 31, 2014);
	Employee employee2("Stephan Colbert", "Comedian", "310-555-5555", 'M', 12346, 51,
		"$700,123", 8, 5, 2015);
	Employee employee3("James Corden", "Talk Show Host", "703-703-1234", 'M', 87654, 37,
		"$900,000", 25, 12, 2014);
	Employee employee4("Katie Couric", "News Reporter", "203-555-6789", 'F', 77777, 58,
		"$500,500", 1, 3, 2005);

	// Create at least one “programmer” object with the default constructor;
	Programmer programmer0;

	// Create at least one “programmer” object with the non - default constructor;
	Programmer programmer1("Sam Software", "Programmer", "819-123-4567", 'M', 54321, 21, "$223,000", 24, 12, 2011,
		5432122, "Joe Boss", 4.0, 0, 1);
	Programmer programmer2("Mary Coder", "Programmer", "310-555-5555", 'F', 65432, 28, "$770,123", 02, 8, 2010, 
		6543222, "Mary Leader", 7.0, 1, 1);

	// Create at least one “software architect” object with the default constructor;
	Software software0;

	// Create at least one “software architect” object with the non - default constructor
	Software software1("Alex Arch", "Architect", "819-123-4444", 'M', 88888, 31, "$323,000", 24, 12, 2009, 
		"Big Boss", 5434222, 5.5, 4);
	Software software2("Sally Designer", "Architect", "310-555-8888", 'F', 87878, 38, "$870,123", 8, 2, 2003,
		"Big Boss", 6543422, 8.0, 11);

	cout << "Employee Base Class" << "\n--------------------------\n\n";

	employee0.printEmployee();
	cout << "\n\n\n";
	employee1.printEmployee();
	cout << "\n\n\n";
	employee2.printEmployee();
	cout << "\n\n\n";
	employee3.printEmployee();
	cout << "\n\n\n";
	employee4.printEmployee();
	cout << "\n\n\n";

	cout << "Programmer Inherited Class" << "\n-------------------------- \n\n";

	programmer0.printProgrammer();
	cout << endl;
	programmer1.printProgrammer();
	cout << endl;
	programmer2.printProgrammer();
	cout << endl;

	cout << "Software Architect Inherited Class" << "\n-------------------------- \n\n";

	software0.printSoftwareArchitect();
	cout << endl;
	software1.printSoftwareArchitect();
	cout << endl;
	software2.printSoftwareArchitect();

	cout << "Changed The Default Constructor" << "\n-------------------------- \n\n";

	cout << "\nWrite code to test changing the data members of a CS1Cemployee;\n\nChanged Employee0\n";

	employee0.setAge(20);
	employee0.setGender('M');
	employee0.setHireDate(14, 03, 2017);
	employee0.setId(123456);
	employee0.setJobTitle("Student");
	employee0.setName("Joshua Student");
	employee0.setPhoneNumber("949-444-1234");
	employee0.setSalary("$0.00");

	employee0.printEmployee();

	cout << "\nWrite code to test changing the data members of a Programmer class;\n\nChanged Programmer0\n";

	programmer0.setAge(25);
	programmer0.setGender('F');
	programmer0.setHireDate(4, 3, 2009);
	programmer0.setId(121212);
	programmer0.setJobTitle("Programmer");
	programmer0.setName("Abigail S.");
	programmer0.setPhoneNumber("949-454-7812");
	programmer0.setSalary("$10,000");

	programmer0.setDepartmentNum(8456123);
	programmer0.setSupervisor("Bigger Boss");
	programmer0.setPayRaise(2.0);
	programmer0.setCpp(false);
	programmer0.setJava(false);

	programmer0.printProgrammer();


	cout << "Write code to test changing the data members of a Software Architect class;\n\nChanged Software0\n";

	software0.setAge(40);
	software0.setGender('M');
	software0.setHireDate(1, 12, 2000);
	software0.setId(7777777);
	software0.setJobTitle("Programmer");
	software0.setName("Charlie H.");
	software0.setPhoneNumber("949-232-0002");
	software0.setSalary("$500,000");

	software0.setDepartmentNum(2222222);
	software0.setSupervisor("The Biggest Boss");
	software0.setPayRaise(5.1);
	software0.setExperience(10);


	software0.printSoftwareArchitect();

	cout << endl << endl;

	return 0;
}

// Output HW03 Ref and Inheritance;
//Employee Base Class
//--------------------------
//
//EmpName: Name EmpId : 0 EmpPhoneNum : XXX - XXX - XXXX EmpAge : 0 EmpGender : M EmpTitle : Job Title EmpSalary : $0.00 HireDate : 1 / 1 / 2000
//
//
//	EmpName : Jimmy Fallon EmpId : 12345 EmpPhoneNum : 949 - 555 - 1234 EmpAge : 40 EmpGender : M EmpTitle : Comedian EmpSalary : $100, 000 HireDate : 31 / 8 / 2014
//
//
//	EmpName : Stephan Colbert EmpId : 12346 EmpPhoneNum : 310 - 555 - 5555 EmpAge : 51 EmpGender : M EmpTitle : Comedian EmpSalary : $700, 123 HireDate : 5 / 8 / 2015
//
//
//	EmpName : James Corden EmpId : 87654 EmpPhoneNum : 703 - 703 - 1234 EmpAge : 37 EmpGender : M EmpTitle : Talk Show Host EmpSalary : $900, 000 HireDate : 12 / 25 / 2014
//
//
//	EmpName : Katie Couric EmpId : 77777 EmpPhoneNum : 203 - 555 - 6789 EmpAge : 58 EmpGender : F EmpTitle : News Reporter EmpSalary : $500, 500 HireDate : 3 / 1 / 2005
//
//
//	Programmer Inherited Class
//	--------------------------
//
//	EmpName : Name EmpId : 0 EmpPhoneNum : XXX - XXX - XXXX EmpAge : 0 EmpGender : M EmpTitle : Job Title EmpSalary : $0.00 HireDate : 1 / 1 / 2000
//
//	Department Number : 0 Supervisor : Pro.Kath Raise Increase : 0.00 Not A C++ Programmer  Not A Java Programmer
//
//
//	EmpName : Sam Software EmpId : 54321 EmpPhoneNum : 819 - 123 - 4567 EmpAge : 21 EmpGender : M EmpTitle : Programmer EmpSalary : $223, 000 HireDate : 12 / 24 / 2011
//
//	Department Number : 5432122 Supervisor : Joe Boss Raise Increase : 4.00 Not A C++ Programmer  Knowledge of Java
//
//
//	EmpName : Mary Coder EmpId : 65432 EmpPhoneNum : 310 - 555 - 5555 EmpAge : 28 EmpGender : F EmpTitle : Programmer EmpSalary : $770, 123 HireDate : 8 / 2 / 2010
//
//	Department Number : 6543222 Supervisor : Mary Leader Raise Increase : 7.00 Knowledge of C++  Knowledge of Java
//
//
//	Software Architect Inherited Class
//	--------------------------
//
//	EmpName : Name EmpId : 0 EmpPhoneNum : XXX - XXX - XXXX EmpAge : 0 EmpGender : M EmpTitle : Job Title EmpSalary : $0.00 HireDate : 1 / 1 / 2000
//
//	Department Number : 0   Supervisor : Pro.Kath Raise Increase : 0.00 Year of Experience : 0
//
//
//	EmpName : Alex Arch EmpId : 88888 EmpPhoneNum : 819 - 123 - 4444 EmpAge : 31 EmpGender : M EmpTitle : Architect EmpSalary : $323, 000 HireDate : 12 / 24 / 2009
//
//	Department Number : 5434222   Supervisor : Big Boss Raise Increase : 5.50 Year of Experience : 4
//
//
//	EmpName : Sally Designer EmpId : 87878 EmpPhoneNum : 310 - 555 - 8888 EmpAge : 38 EmpGender : F EmpTitle : Architect EmpSalary : $870, 123 HireDate : 2 / 8 / 2003
//
//	Department Number : 6543422   Supervisor : Big Boss Raise Increase : 8.00 Year of Experience : 11
//
//	Changed The Default Constructor
//	--------------------------
//
//
//	Write code to test changing the data members of a CS1Cemployee;
//
// Changed Employee0
// EmpName : Joshua Student EmpId : 123456 EmpPhoneNum : 949 - 444 - 1234 EmpAge : 20 EmpGender : M EmpTitle : Student EmpSalary : $0.00 HireDate : 3 / 14 / 2017
//	Write code to test changing the data members of a Programmer class;
//
// Changed Programmer0
// EmpName : Abigail S.EmpId : 121212 EmpPhoneNum : 949 - 454 - 7812 EmpAge : 25 EmpGender : F EmpTitle : Programmer EmpSalary : $10, 000 HireDate : 3 / 4 / 2009
//
//	Department Number : 8456123 Supervisor : Bigger Boss Raise Increase : 2.00 Not A C++ Programmer  Not A Java Programmer
//
//	Write code to test changing the data members of a Software Architect class;
//
// Changed Software0
// EmpName : Charlie H.EmpId : 7777777 EmpPhoneNum : 949 - 232 - 0002 EmpAge : 40 EmpGender : M EmpTitle : Programmer EmpSalary : $500, 000 HireDate : 12 / 1 / 2000
//
//	Department Number : 2222222   Supervisor : The Biggest Boss Raise Increase : 5.10 Year of Experience : 10
//
//
//
//	Press any key to continue . . .
