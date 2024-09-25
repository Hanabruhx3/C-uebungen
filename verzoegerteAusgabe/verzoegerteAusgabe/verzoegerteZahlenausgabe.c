#include <Windows.h>							//<Windows.h> ist ein windows spezifisches tool (?) spezifische funktionen werden nur durch windows freigeschalten wie verzögerungen	
#include <stdio.h>

int main() {
	int i = 1;

	while (i < 16) {
		printf("%d\n", i);
		i++;
		Sleep(1000);							//1000ms=1s verzögerung
	}
	return 0;
}

/*
Ich wusste nicht das ich zwei libraries in einem programm drinnen haben kann und habe deswegen stdio.h ausgelassen.
Dann hab ich probiert das dazugeben und mein printf hat wieder funktioniert.
Intervallfunktion wie vorher geschrieben aber Sleep(1000) hab ich nicht in mein loop eingeschlossen deswegen kam auch keine verzögerung
*/