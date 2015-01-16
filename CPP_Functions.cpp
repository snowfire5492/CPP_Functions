/*
 *
 *
 * subroutines or functions
 *
 *
 */

#include <iostream>
using namespace std;


void showMenu(){
	cout << "1. Search" << endl;
	cout << "2. View record" << endl;
	cout << "3. Quit" << endl;
	cout << "Enter Selection" << endl;
}

int getInput(){
	int input;
	cin >> input;
	return input;
}

void action(int input){
	switch(input){
		case 1:
			cout << "Searching..." << endl;
			break;

		case 2:
			cout << "Viewing ..." << endl;
			break;

		case 3:
			cout << "Quitting... " << endl;
			break;
		default:
			cout << "Please select an item from menu" << endl;
	}
}




int main(){

	showMenu();

	action(getInput());

	return 0;
}
