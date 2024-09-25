#include <stdio.h>

int main() {
	printf("Geben Sie die Laenge ein: ");
	int laenge;
	scanf_s("%d", &laenge);

	printf("geben Sie die Breite ein: ");
	int breite;
	scanf_s("%d", &breite);

	int flaeche = laenge * breite;

	printf("Die Flaeche des Rechteckes beträgt: %d", flaeche);

	return 0;
}