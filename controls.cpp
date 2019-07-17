// original c++ code. It was rewritten in C to compile using bcc
#include <iostream>
using namespace std;
int main() {	
	char selection = 'C';
	while (selection != 'X' && selection != 'x') {
		cout << "\n\nThe following Games have been configured to work with the SNES controller.\n";

		cout << "Other games should be played with the keyboard until we get them setup.\n";
		cout << "Ctrl + F9 will close the game.\n\n";
		cout << "A. Math Rescue and Word Rescue\n";
		cout << "B. Electroman\n";
		cout << "X. Exit\n\n";
		cout << "Press the corresponding SNES controller button and then start to see the controller setup.\n";
		cin >> selection;

		if (selection == 'A' || selection == 'a' ){
			cout <<	"\n\nMath and Word Rescue\n";
			cout << "Action                 KeyBoard    Controller\n";
			cout << "Jump                    Ctrl, ^      B A ^\n";
			cout << "Slime                  Space, Alt    Y X\n";
			cout << "Menu                    Esc          Select\n";
			cout << "Quit                    Q            L\n";
			cout << "                        Enter        Start\n";
			cout << "Show Word (Word Rescue) W            R\n\n";
			cout << "Press Start to Continue";
			cin.get();
			cin.get();
		} else if (selection == 'B' || selection == 'b' ){
			cout <<	"\n\nElectroman\n";
			cout << "Action	  KeyBoard    Controller\n";
			cout << "Jump      ^             B A ^\n";
			cout << "Shoot     Space, Alt     Y X\n";
			cout << "          Esc          Select\n";
			cout << "          Q            L\n";
			cout << "          Enter        Start\n";
			cout << "          Y            R\n\n";
			cout << "Press Start to Continue";
			cin.get();
			cin.get();
		} else {
			cout << "Invalid Entry";
		}
	}
}


