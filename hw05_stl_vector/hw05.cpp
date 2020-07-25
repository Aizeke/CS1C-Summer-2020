/*************************************************************************
* AUTHOR     : Isaac Guido
* HW #05     : STL Vectors
* CLASS      : CS 1C 3pm - 5:20pm
* DUE DATE   : June 23th, 2020
*************************************************************************/

#include <vector>
#include <random>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> Lotto(int, int);

int main() {

	cout << "1. What is the STL? What is a vector?\n\n"
		 << "STL is the Standard Template Library which contains: container classes, algorithms, and iterators.\n"
		 << "A vector is a container that stores data and can dynamically allocate more space for extra data\n\n";

	cout << "2. Which vector operations change the size of a vector after its construction?\n\n"
		 << "The Resize function reallocates storage space given the parameters (size_type n, value_type val = value_type())\n\n";

	cout << "3. What is the STL array container and how does it differ from the built-in array and from a vector?\n\n" 
		 << "An STL array has the advantage of having iterator-based algorithms while a normal array does not, also provides better handle for copy and accessing.\n"
		 << "STL arrays also are fixed size so compared to a Vector it is not dynamic but both have access to the iterator algorithms.\n\n";

	cout << "4. How does the vector member function resize() differ from reserve()?\n\n"
		 << "Vector resize() is used to change the size of the vector, while reserve() starts the vector with the minimum amount of storage given the starting data\n";

	cout << "5. What should begin() and end() do for a container?\n\n"
		 << "begin() function is used to return an iterator pointing to the first element of the vector container.\n"
		 << "end() function is used to return an iterator pointing to next to last element of the vector container.\n"
		 << "Both functions are bidirectional which means it can move forward or backwards through the container.\n\n";
	
	cout << "6. Give an example of using the vector push_back() modifier.\n\n"
		 << "Vector push_back() EX: Adding new students to the container would push students to the back of the vector.\nStudentVector.push_back(newStudent);\n\n";


	// Vector to contain the numbers;
	std::vector<int> winners;

	char answer = 'Y';

	cout << "Here are your Lotto numbers\n\n";

	// Shuffles random numbers and returns a vector with random numbers in it;
	// Loop to display and run again option;
	do {
		winners = Lotto(51, 6);

		for (std::vector<int>::iterator it = winners.begin(); it != winners.end(); ++it)
			cout << *it << " ";

		cout << "\nDraw again? (Y/N)";
		cin >> answer;
		cout << endl;
	} while (toupper(answer) == 'Y');

	system("pause");

	return 0;
} 

// Pre-condition:
//		Takes in parameter to select how many random numbers (int r);
//		Second Parameter Takes in Max number to shuffle (int s);
// Post-condition:
//		Returns a vector of size 6 with random numbers;
std::vector<int> Lotto(int s, int r) {
	std::vector<int> result;

	for (int i = 0; i < s; i++)
	{
		result.push_back(i + 1);
	}

	std::random_shuffle(result.begin(), result.end());

	result.resize(r);

	return result;
};

/* HW05 OUTPUT
	1. What is the STL? What is a vector?

	STL is the Standard Template Library which contains: container classes, algorithms, and iterators.
	A vector is a container that stores data and can dynamically allocate more space for extra data

	2. Which vector operations change the size of a vector after its construction?

	The Resize function reallocates storage space given the parameters (size_type n, value_type val = value_type())

	3. What is the STL array container and how does it differ from the built-in array and from a vector?

	An STL array has the advantage of having iterator-based algorithms while a normal array does not, also provides better handle for copy and accessing.
	STL arrays also are fixed size so compared to a Vector it is not dynamic but both have access to the iterator algorithms.

	4. How does the vector member function resize() differ from reserve()?

	Vector resize() is used to change the size of the vector, while reserve() starts the vector with the minimum amount of storage given the starting data
	5. What should begin() and end() do for a container?

	begin() function is used to return an iterator pointing to the first element of the vector container.
	end() function is used to return an iterator pointing to next to last element of the vector container.
	Both functions are bidirectional which means it can move forward or backwards through the container.

	6. Give an example of using the vector push_back() modifier.

	Vector push_back() EX: Adding new students to the container would push students to the back of the vector.
	StudentVector.push_back(newStudent);

	Here are your Lotto numbers

	13 2 10 50 1 28
	Draw again? (Y/N)Y

	37 2 24 30 35 39
	Draw again? (Y/N)Y

	6 48 14 10 7 39
	Draw again? (Y/N)Y
*/