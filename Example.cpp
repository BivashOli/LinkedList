#include <iostream>
#include "LinkedList.h"

int main() {
	//Example one how to use the LinkedList
	
	LinkedList* list = new LinkedList();
	list->add(new Item(333));
	list->add(new Item(1321));
	std::cout << list->size();
	std::cin.ignore();
	return 0;
}
