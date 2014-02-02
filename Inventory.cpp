/*
 * Inventory.cpp
 *
 *  Created on: 29.1.2014
 *      Author: Heikki
 */

#include <Inventory.h>

using namespace std;

////////////////////////////////////////////////////////////////////////////////
std::ostream&  operator<<(std::ostream& stream, list < GameObject * > ItemList) {
	StringPrinter printer;
	std::list<std::string> namelist;
	list < GameObject * > :: iterator it = ItemList.begin ();
	// pointer to retrieved GameObject from inventory-list
	while ( it != ItemList.end () )
	{
		string name = &(*it)->name;
		namelist.push_back(name);
		it++;
	}
	printer.AddStringList(namelist);
	stream << printer.PrintStrings(stream);
	return stream;
}

Inventory::Inventory() {
	// TODO Auto-generated constructor stub

}

Inventory::~Inventory() {
	// TODO Auto-generated destructor stub
}
////////////////////////////////////////////////////////////////////////////////
const GameObject* Inventory::operator[] ( string name ) {

	return SearchItem(name);
}


////////////////////////////////////////////////////////////////////////////////
void Inventory::AddItem ( const GameObject * go )
{
	inventory.push_back ( go );
}
////////////////////////////////////////////////////////////////////////////////
void Inventory::EraseItem ( const GameObject * go )
{
	inventory.remove ( go );
}
////////////////////////////////////////////////////////////////////////////////
const GameObject *Inventory::SearchItem ( const string & name )
{
	list < const GameObject * > :: iterator it = inventory.begin ();
	// pointer to retrieved GameObject from inventory-list
	const GameObject * go = NULL;
	while ( it != inventory.end () )
	{
		if ( (*it)->name == name )
		{
			go = *it;
			return go;
		}
		it++;
	}
	cout << "Item not found.\n";
	return go;
}

void Inventory::PrintItems() {
	std::cout  << GetInventory();
}

////////////////////////////////////////////////////////////////////////////////
std::list < GameObject * > Inventory::GetInventory (  )
{
	np_inventory.insert(np_inventory.end(), inventory.begin(), inventory.end());
	return np_inventory;
}
