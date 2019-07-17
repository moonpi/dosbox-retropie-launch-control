// This would not compile using bcc. getchar() caused errors in bcc
#include <stdio.h>

int main() {	
	char selection = 'C';
	while (selection != 'X' && selection != 'x') {
		printf( "\n\nThe following Games have been configured to work with the SNES controller.\n");

		printf( "Other games should be played with the keyboard until we get them setup.\n");
		printf( "Ctrl + F9 will close the game.\n\n");
		printf( "A. Math Rescue and Word Rescue\n");
		printf( "B. Electroman\n");
		printf( "X. Exit\n\n");
		printf("Press the corresponding SNES controller button and then start to see the controller setup.\n");
		selection = getchar( );

		if (selection == 'A' || selection == 'a' ){
			printf(	"\n\nMath and Word Rescue\n\n");
			printf( "Action                 KeyBoard    Controller\n\n");
			printf( "Jump                    Ctrl, ^      B A ^\n\n");
			printf( "Slime                  Space, Alt    Y X\n\n");
			printf( "Menu                    Esc          Select\n\n");
			printf( "Quit                    Q            L\n\n");
			printf( "                        Enter        Start\n\n");
			printf( "Show Word (Word Rescue) W            R\n\n");
			printf( "Press Start to Continue");
			getchar( );
			getchar( );
		} else if (selection == 'B' || selection == 'b' ){
			printf(	"\n\nElectroman\n\n");
			printf( "Action	  KeyBoard    Controller\n\n");
			printf( "Jump      ^             B A ^\n\n");
			printf( "Shoot     Space, Alt     Y X\n\n");
			printf( "          Esc          Select\n\n");
			printf( "          Q            L\n\n");
			printf( "          Enter        Start\n\n");
			printf( "          Y            R\n\n");
			printf( "Press Start to Continue");
			getchar( );
			getchar( );
		} else if (selection != 'x' && selection != 'X'){
			printf( "Invalid Entry");
		}

	}
	return 0;
}


