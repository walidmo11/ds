#pragma once
class node
{
public:
	int data;
	int years, months, days;
	node* next;
	node* head;
	node();
	void insirtnode(int);
	void display();
};

