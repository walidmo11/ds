#include "node.h"
#include"wallet.h"
#include <iostream>
using namespace std;
node::node() {
	head = NULL;
}
void node::insirtnode(int value) {
	node* newnode,*last;
	newnode = new node;
	newnode->data = value;
	cout << "enter the year:"; cin >> newnode->years;
	cout << "enter the month:"; cin >> newnode->months;
	cout << "enter the day:"; cin >> newnode->days;
	if (head == NULL) {
		head=newnode;
		newnode->next = NULL;
	}
	else {
		last = head;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = newnode;
		newnode->next = NULL;
	}
}
void node::display() {
	node* current;
	if (head == NULL) {
		cout << "no data to show" << endl;
	}
	else {
		current = head;
		while (current != NULL) {
			cout << "expense:" << current->data << "   date:" << current->years << "-" << current->months << "-" << current->days << endl;
			current = current->next;
		}
		
	}

}

