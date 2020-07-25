#include "Inventory.h"

Inventory::Inventory() : count{ 0 }, p_pInventoryItems{ new Item*[size] }{}

Inventory::Inventory(int size) : size{ size }, count{ 0 }, p_pInventoryItems{ new Item*[size] } {}

// Copy Constructor
Inventory::Inventory(const Inventory & obj2)
{
	p_pInventoryItems = new Item*[size];

	for(int i = 0; i < obj2.count; i++){
		p_pInventoryItems[i] = obj2.p_pInventoryItems[i];
	}
}

Inventory::~Inventory()
{
	for (int i = 0; i < count; i++) {
		delete p_pInventoryItems[i];
	} 
	// Delete the Inventory items
	delete[] p_pInventoryItems;
}

void Inventory::addItems(string name, int quantity, float cost)
{
	// Create new item to be added to the array.
	Item * newItem = new Item;

	newItem->name = name;
	newItem->quantity = quantity;
	newItem->cost = cost;

	// Add newItem to array and then add to counter.
	p_pInventoryItems[count++] = newItem;
}

void Inventory::changeInventory(string itemName, int amountChanged) {
    for (int i = 0; i < count; i++) {
        if(itemName == p_pInventoryItems[i]->name) {
            p_pInventoryItems[i]->quantity -= amountChanged;

           userTotal += (p_pInventoryItems[i]->cost * amountChanged);
        }
    }
}

void Inventory::printItems()
{
	cout << "Name:\t\t\tQuantity:\tPrice:" << endl;

	// Loop to iterate through the array using the counter as the end value.
	for (int i = 0; i < count; i++) {

		cout << p_pInventoryItems[i]->name << "\t\t" <<
			p_pInventoryItems[i]->quantity << "\t\t" <<
			"$"<< std::setprecision(2) << std::fixed << p_pInventoryItems[i]->cost << endl;
	}

	cout << "\nTransaction Total:\t" << userTotal << endl
		 << "Total w/Tax:\t" << userTotal + (userTotal * transaction::TAX_RATE) << endl << endl;
}