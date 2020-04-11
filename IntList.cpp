#include <iostream>
#include "IntList.h"

using namespace std;

IntList::IntList() {
	head = nullptr;
	tail = nullptr;
}

IntList::~IntList() {
	IntNode* curr;
	curr = head;
	while (curr != nullptr) {
		delete curr->prev;
		curr = curr->next;
		
	}
}

void IntList::push_front(int value) {
	IntNode* newNode = new IntNode(value);

	if(empty()){
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

void IntList::pop_front() {
	if (!empty()) {

		if (head == tail) {
			delete head;
			head = tail = nullptr;
		}
		else {
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}
	}
}

void IntList::push_back(int value) {
	IntNode* newNode = new IntNode(value);

	if (empty()) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

void IntList::pop_back() {
	if (!empty()) {

		if (head == tail) {
			delete tail;
			head = tail = nullptr;
		}
		else {
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}
	}
}

ostream& operator<<(ostream& out, const IntList& rhs) {
	if (rhs.empty()) {
		return out;
	}
	IntNode* curr = rhs.head;

	out << curr->data;
	curr = curr->next;
	while (curr != nullptr) {
		out << " " << curr->data;
		curr = curr->next;
	}
	return out;

}

void IntList::printReverse()const {
	if (empty()) {
		return;
	}
	IntNode* curr = tail;
	while (curr != head) {
		cout << curr->data<<" ";
		curr = curr->prev;
	}
	cout << head->data;
}