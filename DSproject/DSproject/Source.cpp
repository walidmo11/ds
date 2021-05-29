#include <iostream>
#include "node.h"
#include "wallet.h"
using namespace std;
int main() {
	int nav;
	node node1;
	wallet wallet1;
	cout << "-------------------------main menue------------------------------" << endl;
	cout << "enter 1 to add wallet ,2 to add expenses, 0 to exit:"; cin >> nav;
	while (nav != 0) {
		if (nav == 1) {	
			wallet1.addwallet();
			cout << "-------------------------main menue------------------------------" << endl;
			cout << "enter 1 to add wallet ,2 to add expenses, 0 to exit:"; cin >> nav;
		}
		else if (nav == 2) {
			int nav2=6;	
			while (nav2 != 0) {
				int expense,num;
				cout << "enter expense:"; cin >> expense;
				cout << "which wallet do you want to cut money from:"; cin >> num;
				if (wallet1.validop(expense, num)) {
					node1.insirtnode(expense);
				}
				else {
					cout << "error wallet doesn't exist of not enough money." << endl;
				}
				cout << "enter 1 to add another expense , 0to go to the menue:"; cin >> nav2;
			}
			cout << "-------------------------main menue------------------------------" << endl;
			cout << "enter 1 to add wallet ,2 to add expenses, 0 to exit:"; cin >> nav;

		}

	}


}