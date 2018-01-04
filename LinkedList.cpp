#include "LinkedList.h"

void LinkedList::add(Item* item) {
	if (firstItem == nullptr)
		firstItem = item;
	else {
		Item* tempItem = firstItem;
		while (tempItem->nextItem != nullptr) {
			tempItem = tempItem->nextItem;
		}
		tempItem->nextItem = item;
	}
}

int LinkedList::get(int j) {
	Item* tempItem = firstItem;
	for (int i = 0; i < j; i++) {
		tempItem = tempItem->nextItem;
	}
	return tempItem->value;
}

int LinkedList::size() {
	if (firstItem == nullptr)
		return 0;
	else {
		int size = 1;
		Item* tempItem = firstItem;
		while (tempItem->nextItem != nullptr) {
			tempItem = tempItem->nextItem;
			size++;
		}
		return size;
	}
}