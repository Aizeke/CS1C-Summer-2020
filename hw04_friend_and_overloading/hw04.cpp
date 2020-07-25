/*************************************************************************
* AUTHOR     : Isaac Guido
* HW #04      : Operator Overloading & Friend Functions
* CLASS      : CS 1C 3pm - 5:20pm
* DUE DATE   : June 18th, 2020
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


	Employee &emp1 = employee1;
	Employee &emp2 = employee2;
	Employee &emp3 = employee3;

	Programmer &prog1 = programmer1;

	//cout << "Employee Base Class" << "\n--------------------------\n\n";

	//employee0.printEmployee();
	//cout << "\n\n\n";
	//employee1.printEmployee();
	//cout << "\n\n\n";
	//employee2.printEmployee();
	//cout << "\n\n\n";
	//employee3.printEmployee();
	//cout << "\n\n\n";
	//employee4.printEmployee();
	//cout << "\n\n\n";

	//cout << "Programmer Inherited Class" << "\n-------------------------- \n\n";

	//programmer0.printProgrammer();
	//cout << endl;
	//programmer1.printProgrammer();
	//cout << endl;
	//programmer2.printProgrammer();
	//cout << endl;

	//cout << "Software Architect Inherited Class" << "\n-------------------------- \n\n";

	//software0.printSoftwareArchitect();
	//cout << endl;
	//software1.printSoftwareArchitect();
	//cout << endl;
	//software2.printSoftwareArchitect();

	//cout << "Changed The Default Constructor" << "\n-------------------------- \n\n";

	//cout << "\nWrite code to test changing the data members of a CS1Cemployee;\n\nChanged Employee0\n";

	//employee0.setAge(20);
	//employee0.setGender('M');
	//employee0.setHireDate(14, 03, 2017);
	//employee0.setId(123456);
	//employee0.setJobTitle("Student");
	//employee0.setName("Joshua Student");
	//employee0.setPhoneNumber("949-444-1234");
	//employee0.setSalary("$0.00");

	//employee0.printEmployee();

	//cout << "\nWrite code to test changing the data members of a Programmer class;\n\nChanged Programmer0\n";

	//programmer0.setAge(25);
	//programmer0.setGender('F');
	//programmer0.setHireDate(4, 3, 2009);
	//programmer0.setId(121212);
	//programmer0.setJobTitle("Programmer");
	//programmer0.setName("Abigail S.");
	//programmer0.setPhoneNumber("949-454-7812");
	//programmer0.setSalary("$10,000");

	//programmer0.setDepartmentNum(8456123);
	//programmer0.setSupervisor("Bigger Boss");
	//programmer0.setPayRaise(2.0);
	//programmer0.setCpp(false);
	//programmer0.setJava(false);

	//programmer0.printProgrammer();


	//cout << "Write code to test changing the data members of a Software Architect class;\n\nChanged Software0\n";

	//software0.setAge(40);
	//software0.setGender('M');
	//software0.setHireDate(1, 12, 2000);
	//software0.setId(7777777);
	//software0.setJobTitle("Programmer");
	//software0.setName("Charlie H.");
	//software0.setPhoneNumber("949-232-0002");
	//software0.setSalary("$500,000");

	//software0.setDepartmentNum(2222222);
	//software0.setSupervisor("The Biggest Boss");
	//software0.setPayRaise(5.1);
	//software0.setExperience(10);


	//software0.printSoftwareArchitect();

	//cout << endl << endl;

	cout << "Write and test a friend function that checks to see if the phone numberof a C1SCEmployee object is equal to the phone numberof a Programmer object.\n\nIS NOT EQUAL - SET EQUAL TO\n\n";

	if (prog1 == emp1) {
		cout << prog1.getName() << " has the same phone number as " << emp1.getName() << endl << endl;
		cout << prog1.getName() << " did not change to match numbers " << emp1.getName() << " phone number\n\n\n";
	}
	else {
		cout << prog1.getName() << " Phone Number: " << prog1.getPhone() << " has a different phone number than " << emp1.getName() << " Phone Number: " << emp1.getPhone()
			<< endl << endl;
		prog1.setPhoneNumber(emp1.getPhone());
		cout << prog1.getName() << " now have the same phone number as " << emp1.getName() << endl;
		cout << prog1.getName() << " Phone Number: " << prog1.getPhone() << endl << emp1.getName() << " Phone Number: " << emp1.getPhone() << endl << endl << endl;
	}

	cout << "Overload the equality operator to see if the phone number of two C1SCEmployees are the same. \n\nIS NOT EQUAL - SET EQUAl TO\n\n";

	if (emp2 == emp3)
	{
		cout << emp1.getName() << " has the same phone number as " << emp2.getName() << endl;

		cout << emp1.getName() << " did not change to match numbers " << emp2.getName() << " phone number\n\n\n";

	}
	else
	{
		cout << emp1.getName() << " Phone Number: " << emp1.getPhone() << " does not have the same phone number as " << emp2.getName() << " Phone Number: " << emp2.getPhone() << endl;
		emp1.setPhoneNumber(emp2.getPhone());

		cout << emp1.getName() << " now has the same phone number as " << emp2.getName() << endl;
		cout << emp1.getName() << " Phone Number: " << emp1.getPhone() << endl << emp2.getName() << " Phone Number: " << emp2.getPhone() << endl << endl << endl;
	}

	cout << "Write an addition member function that adds an integer to a CS1Cemployee’sage (make sure the integer is a passed parameter).  The output should state how many years were added to the age." << endl << endl;
	employee3.addAge(8);
	cout << "Overload the addition operator to add a constant to a CS1Cemployee’sage. EX: employee4 + 5" <<  endl;
	employee4 + 5;
	cout << endl << endl;

	cout << "Overload << and >> operators to read in a CS1Cemployeeobject (e.g. cin >> myEmployeeand cout << myEmployee)" << endl << endl;

	cout << "Enter 5 digit ID and phone number (xxx-xxx-xxxx) for " << employee3.getName() << endl << endl;

	cin >> employee3;

	cout << employee3 << endl << endl;

	return 0;
}

// Output HW04 Operator Overloading & Friend Functions;
// Write and test a friend function that checks to see if the phone numberof a C1SCEmployee object is equal to the phone numberof a Programmer object.

// IS NOT EQUAL - SET EQUAL TO

// Sam Software Phone Number: 819-123-4567 has a different phone number than Jimmy Fallon Phone Number: 949-555-1234

// Sam Software now have the same phone number as Jimmy Fallon
// Sam Software Phone Number: 949-555-1234
// Jimmy Fallon Phone Number: 949-555-1234


// Overload the equality operator to see if the phone number of two C1SCEmployees are the same.

// IS NOT EQUAL - SET EQUAl TO

// Jimmy Fallon Phone Number: 949-555-1234 does not have the same phone number as Stephan Colbert Phone Number: 310-555-5555
// Jimmy Fallon now has the same phone number as Stephan Colbert
// Jimmy Fallon Phone Number: 310-555-5555
// Stephan Colbert Phone Number: 310-555-5555


// Write an addition member function that adds an integer to a CS1CemployeeÆsage (make sure the integer is a passed parameter).  The output should state how many years were added to the age.

// 8 years were added to James Corden
// Overload the addition operator to add a constant to a CS1CemployeeÆsage. EX: employee4 + 5
// 5 years were added to Katie Couric


// Overload << and >> operators to read in a CS1Cemployeeobject (e.g. cin >> myEmployeeand cout << myEmployee)

// Enter 5 digit ID and phone number (xxx-xxx-xxxx) for James Corden