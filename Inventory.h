/*
 * Inventory.h
 *
 *  Created on: 29.1.2014
 *      Author: Heikki
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <GameObject.h>
#include <StringPrinter.h>
#include <iostream>


using namespace std;

class Inventory: public GameObject {
	friend std::ostream&  operator<<(std::ostream stream, list < GameObject * > ItemList);
	friend class GameObject;
public:
	Inventory();
	virtual ~Inventory();
	const GameObject* operator[] ( string name );
	//std::ostream&  operator<<(list < const GameObject * > ItemList);
	  // add new pointer to GameObject to inventory-list
	  void AddItem ( const GameObject * go );
	  void EraseItem ( const GameObject * go );
	  void PrintItems();
	  // search pointer to GameObject from inventory-list by given id. If match is found return the pointer.
	  const GameObject * SearchItem ( const string & id );
	  //list < const GameObject * > GetInventory ( );
	  list < GameObject * > GetInventory (  );
private:
	list < const GameObject * > inventory;
	list < GameObject * > np_inventory;

};


#endif /* INVENTORY_H_ */
