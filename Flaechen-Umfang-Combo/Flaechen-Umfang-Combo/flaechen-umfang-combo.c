#include <stdio.h>

void main() {

	//dient zum speichern meiner eingabe char option ist zum speichern meiner auswahl entweder F oder U (Flaeche, Umfang)
	char option;
	double laenge;
	double breite;

	printf("Moechten Sie den Umfang oder die Flaeche bestimmen?\n");
	printf("Bitte geben sie U fuer Umfang ein oder F fuer die Flaeche: ");
	scanf_s("%c", &option);
	//entweder fl�che oder Umfang ausw�hlen

	//l�nge und breite erfragen
	printf("Bitte geben Sie die Laenge des Rechtecks ein: ");
	scanf_s("%lf", &laenge);
	printf("Bitte geben Sie die Breite des Rechtecks ein: ");
	scanf_s("%lf", &breite);

	//Else und if statement f�r umfang oder fl�che! falls was anderes eingegeben wird ung�ltig!!
	// Das hier || == oder; erlaubt es mir mehrere m�glichkeiten zu �berpr�fen/bestimmen
	//Umfang und Fl�che werden im if und else if block deklariert weil sie da erst gebraucht werden? aber warum dann nicht gleich am anfang? effizienz?
	if (option == 'U' || option == 'u') {
		double Umfang = 2 * (laenge + breite);
		printf("Der Umfang des Rechtecks betraegt: %lf", Umfang);
	}
	else if (option == 'F' || option == 'f') {
		double Flaeche = laenge * breite;
		printf("Die Flaeche des Rechtecks betraegt: %lf", Flaeche);
	}
	else {
		printf("UNGUELTIGE EINFABE!");
	}

}


//bin draufgekommen dass man f�r doubles %lf braucht weils floating numbers sind und %d wird nur f�r integers benutzt
//Bin auch draufgekommen dass es vielleicht besser ist meine deklarationen zuerst anzuf�hren und dann alles andere drunter.