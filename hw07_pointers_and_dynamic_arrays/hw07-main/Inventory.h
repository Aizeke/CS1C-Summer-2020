#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// Item Struct to hold items for transactions
struct Item {
	string name;
	int quantity;
	float cost;
};

// Namespace to hold Taxrate and Max Size;
namespace transaction {
	const double TAX_RATE = 0.0825;
	const int MAX_SIZE = 50;
}

class Inventory {
public:
	// Create new array with unInitialized data, set count to 0;
	Inventory();
	// Create new array with unInitialized data, set size and count;
	Inventory(int);
	// Copy Constructor
	Inventory(const Inventory& p);
	~Inventory();

	// Pre-condition:
	//		Send in a Name, Quantity and Price to be added to array;
	// Post-condition:
	//		Void Returning. Only Assigns to Array;
	void addItems(string, int, float);
	
	// Pre-conditions:
	//		Takes in name of item and amount of that item and removes
	//		it from the total inventory;
	// Post-conditions:
	//		Void returning;
    void changeInventory(string, int);

    // Pre-conditions:
	//		Void;
	// Post-conditions:
	//		Prints out the Inventory;
	void printItems();
	
	// Private Data Members;
private:
	int size{ transaction::MAX_SIZE };
	int count;
	float userTotal = 0.0;
	Item **p_pInventoryItems;
};

#endif // !INVENTORY_H_