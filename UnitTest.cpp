/*
 * TestUnit.cpp
 *
 *  Created on: 2.2.2014
 *      Author: Heikki
 */
#include "Inventory.h"
#include "GameObject.h"
int main() {
	Inventory *inventory;
	inventory = new Inventory();
	GameObject *gameobject;
	GameObject *gameobject2;
	gameobject = new GameObject();
	gameobject2 = new GameObject();
	std::string name1 = "gameobject1";
	std::string id1 = "gameobject1ID";
	gameobject->SetId(name1);
	gameobject->SetName(id1);
	std::string name2 = "gameobject2";
	std::string id2 = "gameobjec2ID";
	gameobject2->SetId(name2);
	gameobject2->SetName(id2);
	inventory->AddItem(gameobject);
	inventory->AddItem(gameobject2);
	inventory->PrintItems();

	return 0;
}



