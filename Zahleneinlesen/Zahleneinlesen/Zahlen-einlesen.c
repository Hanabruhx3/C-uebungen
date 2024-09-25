#include <stdio.h>

int main() {

	//integer erstellen um Zahl zu speichern
	int number;

	//Eingabe erfragen
	printf("Bitte Zahl eingeben: ");

	//Eingegebene Zahl wird gespeichert und aufgerufen
	scanf_s("%d", &number);

	//Nummer wird hier in der Console angezeigt
	printf("Die Nummer ist: %d", number);

	return 0;
}