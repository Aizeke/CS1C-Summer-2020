/*************************************************************************
* AUTHOR     : Isaac Guido
* HW #06     : Recursion
* CLASS      : CS 1C M - Th 3pm - 5:20pm
* DUE DATE   : June 25th, 2020
*************************************************************************/

#include <iostream>
#include <string>

using namespace std;

// Function Prototype to reverse a phrase from a range.
void reverse(string&, int, int);

int main() {

	string alpha = "abcdefghijklmnopqrstuvwxyz";

    // First Iteration
	cout << "Reverse: 11(L)-18(S)\n";
	reverse(alpha, 11, 18);

	cout << "END OF RECURSION\n"<< alpha << endl;

	return 0;
}


// Pre-Condition:
//      Sent In Reference of Original String, And 2 Parameters to Use
//      As The Range to Reverse Alphabet
// Post-Condition:
//      Returns Alphabet in Reverse
void reverse(string &phrase, int start, int end) {

    // Loop to Swap characters in the string.
	for (int i = start; i < end; i++) {
		swap(phrase[i], phrase[end]);
		end--;
	}

	cout << phrase << endl << "Start: " << start << "   End: " << end << endl << endl;

    // Conditional Statements to call reverse function.
	if (phrase == "zyxwvutsrqponmlkjihgfedcba") {
		return;
	} else if (phrase == "abcdwvutsrqponmlkjihgfexyz") {
		cout << "Reverse: \n";
	} else if (phrase == "abcdefghijksrqponmltuvwxyz") { 
		cout << "Reverse: 4(E)-7(K), 16(T)-22(W)\n";
		reverse(phrase, 4, 22);
	} else {
		cout << "Could not figure out solution\n";
	}
}

/* OUTPUT
Reverse: 11(L)-18(S)
abcdefghijksrqponmltuvwxyz
Start: 11   End: 14

Reverse: 4(E)-7(K), 16(T)-22(W)
abcdwvutlmnopqrskjihgfexyz
Start: 4   End: 13

Reverse:
abcdwxefghijksrqponmltuvyz
Start: 5   End: 14

Could not figure out solution
END OF RECURSION
abcdwxefghijksrqponmltuvyz
Press any key to continue . . .
*/