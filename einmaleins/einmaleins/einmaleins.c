#include <stdio.h>

int main() {
	int i;
	int j;

	/*
	Äussere schleife für die erste Zahl (i) im 1x1. 
	Funktion besagt i soll bei eins anfangen. 
	i ist kleiner gleich 10. 
	i soll immer eins mehr werden.*/

	for (i = 1; i <= 10; i++) {							
		for (j = 1; j <= 10; j++) {						//das gleiche wie in der äusseren schleife, diese schleife macht das gleiche für die zweite zahl j
			printf("%d x %d = %d\n", i, j, i * j);		//zahl 1 x zahl 2 = produkt aus zahl 1 und zahl 2
		}
	}
	return 0;
}