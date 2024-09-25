#include <stdio.h>



void main() {
	printf("Geben Sie die Laenge ein: ");
	double	laenge;
	scanf_s("%lf", &laenge);

	printf("geben Sie die Breite ein: ");
	double breite;
	scanf_s("%lf", &breite);

	double umfang = 2 * (laenge+ breite);

	printf("Der Umfang des Rechtecks betraegt %lf", umfang);

}

//habe &umfang verwendet dass & symbol ruft die location von der gespeicherten variablen ab (oder adresse?) Zeichen ist weg jetzt klappts

