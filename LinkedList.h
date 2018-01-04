//#ifndef LINKEDLIST_H
//#define LINKEDLIST_H 

#include "Item.h"
class LinkedList {

public:
	Item* firstItem;
	void add(Item* item);
	int get(int j);
	int size();
};

//#endif