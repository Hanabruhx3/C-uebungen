#include <stdio.h>

void main() {
	printf("Geben Sie die Laenge ein: ");
	double laenge;
	scanf_s("%fl", &laenge);

	printf("geben Sie die Breite ein: ");
	double breite;
	scanf_s("%fl", &breite);

	double flaeche = laenge * breite;

	printf("Die Flaeche des Rechteckes betraegt: %fl", flaeche);

	return 0;
}