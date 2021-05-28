#include "node.h"
node::node() {
	head = nullptr;
}
void node::insirtnode(int value) {
	node* newnode,*last;
	newnode = new node;
	newnode->data = value;
	if (head == nullptr) {
		newnode = head;
		newnode->next = nullptr;
	}
	else {
		last = head;
		while (last->next != nullptr) {
			last = last->next;
		}
		last->next = newnode;
	}
}