#include "wallet.h"
#include <iostream>
using namespace std;
wallet::wallet() {
	w = new int[1];
}
void wallet::display_wallet() {
	for (int i = 0; i <= walletsno; i++) {
		cout << "wallet" << i+1 << ": " << w[i] << endl;
	}
}

void wallet::addwallet() {
	if (nowallet()) {
		int walletvalue;
		cout << "enter first wallet value:"; cin >> walletvalue;
		w[0] = walletvalue;
	}
	else {
		int* wallet2;
		int walletv;
		wallet2 = new int[walletsno + 1];
		for (int i = 0; i < walletsno; i++) {
			wallet2[i] = w[i];
		}
		delete w;
		w = wallet2;
		cout << "enter wallet value:"; cin >> walletv;
		w[walletsno] = walletv;
	}
}
bool wallet::nowallet() {
	if (w[0] == NULL)return true;
	else
	{
		return false;
	}
}
bool wallet::validop(int ex, int num) {
	if (num <= walletsno && ex <= w[num]) {
		w[num] = w[num] - ex;
		return true;
	}
	else {

		return false;
	}
}

