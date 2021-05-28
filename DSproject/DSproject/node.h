#pragma once
class node
{
public:
	int data;
	int years, months, days;
	node* next;
	node* head;
	node();
	void insirtnode(int v,int y,int m ,int d);
	void display();
	void test();
};

