#pragma once
class wallet
{
public:
	int walletsno;
	int* w;
	wallet();
	void display_wallet();
	void enwallet();
	void addwallet();
	bool validop(int, int);
	void cut();
	bool nowallet();
};

