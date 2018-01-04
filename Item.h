#ifndef ITEM_H
#define ITEM_H 

class Item {
public:
	int value;
	Item* nextItem;
	Item(int value) {
		this->value = value;
	}
};

#endif
