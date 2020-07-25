/*************************************************************************
* AUTHOR     : Isaac Guido
* HW #07EC   : Pointers & Dynamic Arrays
* CLASS      : CS 1C M - Th 3pm - 5:20pm
* DUE DATE   : June 30th, 2020
*************************************************************************/
#include "Inventory.h"

int main() {
	
	Inventory myTransaction;

	cout << "Adding New Item\n\n";

	// Instantiate 5 items to the array.
	myTransaction.addItems("Shoes", 123, 23.5);
	myTransaction.addItems("Belt", 134, 18.99);
	myTransaction.addItems("Jacket", 89, 45.2);
	myTransaction.addItems("Pants", 20, 59.9);
	myTransaction.addItems("Shirt", 300, 15.55);

	myTransaction.printItems();

	return 0;
}

// OUT PUT :
// Adding New Item
// Name:   Quantity:       Price:
// Shoes   123             $23.50
// Belt    134             $18.99
// Jacket  89              $45.20
// Pants   20              $59.90
// Shirt   300             $15.55
// Press any key to continue . . .