#include <stdio.h>

int main() {

	int add1;
	int add2;
	int add3;

	/*long long wird für Größere Zahlen verwendet! aka long long ist für long long Zahlen :D
	Falls der input größer ist und diese zusammen gezählt werden kann es sein das es den speicherwert (?) vom integer (ca.2 mrd.) überschreitet
	Soll overflow verhindern (Overflow = Computer kennt sich nix mehr aus und das ergebnis wird komisch)
	*/
	
	long long sum = 0;
	int count = 0;

	printf("Summenvariablen!\n");
	
	printf("Bitte geben Sie die erste Zahl fuer die Summenvariable ein: ");
	scanf_s("%d", &add1);
	printf("Bitte geben Sie die zweite Zahl fuer die Summenvariable ein: ");
	scanf_s("%d", &add2);
	printf("Bitte geben Sie die dritte Zahl fuer die Summenvariable ein: ");
	scanf_s("%d", &add3);

	/*
	Summenvariable startet bei null und input wird auf die null dazu gezählt bis es 1mio. erreicht oder überschreitet
	Count startet bei null, jeder loop (initialisierung?) wir dann mit ++ dazugezählt
	sum += add1 + add2+ add3 ist das gleiche wie sum + (add1 + add2 + add3) die Summenwerte von add1 - 3 wird zum aktuellen wert von sum gespeichert.
	Gesamtwert wird dann als neuer aktueller sum wert gespeichert usw bis 1 mio.
	*/
	while (sum < 1000000) {
		sum += add1 + add2 + add3;												
		count++;
	}

	printf("Die Summe hat %lld erreicht!\n", sum);
	printf("Anzahl der Schleifen: %d", count);


	return 0;
}

//Ich hab die & zeichen bei meinen adds vergessen