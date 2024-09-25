#include <stdio.h>

int main() {
	int number = 100;

	printf("Bitte Zahl eingeben: ");

	scanf_s("%d", &number);

	if (199 < number) { printf("Nummer ist groesser als 200."); } 

	else if (100 < number ) { printf("Nummer ist groesser als 100 aber kleiner als 200."); }

	else { printf("Nummer ist kleiner als 100 und 200"); }

	return 0;

}
/*
Bei Aufgabe 5
vorher if (% d > 100)
mein fehler ich wollte die zahl 100 mit %d vergleichen bzw meinem imput! Ich habe die zahl mit einem text NICHT mit der nummer selbst verglichen!!
jetzt spuckts mir alles unter 200 als groesser als 100 aus*/

/*Aufgabe6
Logik fehler! if (200 < number) else if (200 > number) sprich jede zahl auch die unter hundert waren immer grösser als 100 aber kleiner als 200 */