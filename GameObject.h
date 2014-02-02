////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __GameObject_h__
#define __GameObject_h__
#include <string>
#include <list>
//#include "Updateable.h"
#include "PropertyHolder.h"

////////////////////////////////////////////////////////////////////////////////
using std::string;
using std::list;
///////////////////////////////////////////////////////////////////////////////
/// Base class for all game characters.
class GameObject
{
	friend class Inventory;
private:
	string id;
	string name;
	list < const GameObject * > inventory;
	PropertyHolder Properties;

public:

  GameObject ();
  GameObject ( const string & id, const string & name );
  virtual ~GameObject ();

  void SetName ( string & name ) ;
  string GetName () const;

  void SetId ( string & id );
  string GetId () const;

  // add new pointer to GameObject to inventory-list
  void AddItem ( const GameObject * go );
  void EraseItem ( const GameObject * go );
  // search pointer to GameObject from inventory-list by given id. If match is found return the pointer.
  const GameObject * SearchItem ( const string & id );
  list < const GameObject * > GetInventory ( );

  //void Attack ( GameObject *pObject );

  void Update ();
};

#endif
