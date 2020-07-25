/*************************************************************************
* AUTHOR     : Isaac Guido
* HW #07EC   : Pointers & Dynamic Arrays
* CLASS      : CS 1C M - Th 3pm - 5:20pm
* DUE DATE   : June 30th, 2020
*************************************************************************/
#include "Inventory.h"

int main() {
	
	Inventory myTransaction;

	cout << "Adding Items\n\n";

	// Instantiate 5 items to the array.
	myTransaction.addItems("Nike basketball shoes", 22, 145.99);
	myTransaction.addItems("Under Armour T-shirts", 33, 29.99);
	myTransaction.addItems("Nike shorts", 11, 111.44);
	myTransaction.addItems("Brooks running shoes", 77, 45.77);
	myTransaction.addItems("Asics running shoes", 20, 165.88);

	myTransaction.printItems();

	cout << "\n\nMark's Purchase:" << endl << endl;

    cout << "Two pairs of Nike basketball shoes,\nThree Under Armour T-shirts,\nFour Nike shorts,\nand one pair of Brooks running shoes.\n\n\n";

    myTransaction.changeInventory("Nike basketball shoes", 2);
    myTransaction.changeInventory("Under Armour T-shirts", 3);
    myTransaction.changeInventory("Nike shorts", 4);
    myTransaction.changeInventory("Brooks running shoes", 1);

    myTransaction.printItems();

	cout << endl << endl;

	cout << "Calling the Copy Constructor:\nUsing newTransaction:\n\n";

	Inventory newTransaction(myTransaction);

	newTransaction.printItems();

	return 0;
}

// OUT PUT :
// Adding Items

// Name:			Quantity:	Price:
// Nike basketball shoes		22		$145.99
// Under Armour T-shirts		33		$29.99
// Nike shorts		11		$111.44
// Brooks running shoes		77		$45.77
// Asics running shoes		20		$165.88

// Transaction Total:	0.00
// Total w/Tax:	0.00



// Mark's Purchase:

// Two pairs of Nike basketball shoes,
// Three Under Armour T-shirts,
// Four Nike shorts,
// and one pair of Brooks running shoes.


// Name:			Quantity:	Price:
// Nike basketball shoes		20		$145.99
// Under Armour T-shirts		30		$29.99
// Nike shorts		7		$111.44
// Brooks running shoes		76		$45.77
// Asics running shoes		20		$165.88

// Transaction Total:	873.48
// Total w/Tax:	945.54



// Calling the Copy Constructor:
// Using newTransaction:

// Name:			Quantity:	Price:

// Transaction Total:	0.00
// Total w/Tax:	0.00
