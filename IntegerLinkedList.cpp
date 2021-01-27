// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

int IntegerLinkedList::getSum() {
	int sum = 0;
	SNode* tmp;
	tmp = head;
	while (tmp != nullptr) {
		sum += tmp->elem;
		tmp = tmp->next;
	}
	return sum;
}// COMPLETE THIS FOR PROBLEM 2

int IntegerLinkedList::getSumRecurse(SNode* ptr) {
	int sum = 0;
	if (ptr != nullptr) {
		sum += ptr->elem + getSumRecurse(ptr->next);
	}
	return sum;
}

void IntegerLinkedList::addFront(int x) {
	SNode* tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::getSumRecurseHelper() {
	return getSumRecurse(head);
}
