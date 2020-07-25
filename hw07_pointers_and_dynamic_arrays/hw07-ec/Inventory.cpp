#include "Inventory.h"

Inventory::Inventory() : count{ 0 }, p_pInventoryItems{ new Item*[size] }{}

Inventory::Inventory(int size) : size{ size }, count{ 0 }, p_pInventoryItems{ new Item*[size] } {}

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

void Inventory::printItems()
{
	cout << "Name:\tQuantity:\tPrice:" << endl;

	// Loop to iterate through the array using the counter as the end value.
	for (int i = 0; i < count; i++) {

		cout << p_pInventoryItems[i]->name << '\t' <<
			p_pInventoryItems[i]->quantity << "\t\t" <<
			"$"<< std::setprecision(2) << std::fixed << p_pInventoryItems[i]->cost << endl;
	}
}