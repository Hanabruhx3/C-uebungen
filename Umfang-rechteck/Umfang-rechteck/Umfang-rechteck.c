#include <stdio.h>



int main() {
	printf("Geben Sie die Laenge ein: ");
	int	laenge;
	scanf_s("%d", &laenge);

	printf("geben Sie die Breite ein: ");
	int breite;
	scanf_s("%d", &breite);

	int umfang = 2 * (laenge+ breite);

	printf("Der Umfang betraegt %d", umfang);

	return 0;
}

//habe &umfang verwendet dass & symbol ruft die location von der gespeicherten variablen ab (oder adresse?) Zeichen ist weg jetzt klappts

