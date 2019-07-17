#include <stdio.h>
// This is the version that is used to make the controller menu using bcc
// To install bcc, type: sudo apt-get install bcc in the terminal
// To compile in DOS, change to directory then type: bcc -Md -o controls.com controls2.c
int main() {	
		printf( "The following Games have been configured to work with the SNES controller.\n");

		printf( "Other games should be played with the keyboard until we get them setup.\n");




			printf(	"\n\nMath and Word Rescue\n");
			printf( "Action                 KeyBoard    Controller\n");
			printf( "Jump                    Ctrl, ^      B A ^\n");
			printf( "Slime                  Space, Alt    Y X\n");
			printf( "Menu                    Esc          Select\n");
			printf( "Quit                    Q            L\n");
			printf( "                        Enter        Start\n");
			printf( "Show Word (Word Rescue) W            R\n");


			printf(	"\n\nElectroman\n");
			printf( "Action	  KeyBoard    Controller\n");
			printf( "Jump      ^             B A ^\n");
			printf( "Shoot     Space, Alt     Y X\n");
			printf( "          Esc          Select\n");
			printf( "          Q            L\n");
			printf( "          Enter        Start\n");
			printf( "          Y            R\n\n");
		printf( "Hold Select then press start to exit.\n");

	return 0;
}


