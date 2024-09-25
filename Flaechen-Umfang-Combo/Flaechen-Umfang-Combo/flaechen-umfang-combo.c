#include <stdio.h>

void main() {

	//dient zum speichern meiner eingabe char option ist zum speichern meiner auswahl entweder F oder U (Flaeche, Umfang)
	char option;
	double laenge;
	double breite;

	printf("Moechten Sie den Umfang oder die Flaeche bestimmen?\n");
	printf("Bitte geben sie U fuer Umfang ein oder F fuer die Flaeche: ");
	scanf_s("%c", &option);
	//entweder fläche oder Umfang auswählen

	//länge und breite erfragen
	printf("Bitte geben Sie die Laenge des Rechtecks ein: ");
	scanf_s("%lf", &laenge);
	printf("Bitte geben Sie die Breite des Rechtecks ein: ");
	scanf_s("%lf", &breite);

	//Else und if statement für umfang oder fläche! falls was anderes eingegeben wird ungültig!!
	// Das hier || == oder; erlaubt es mir mehrere möglichkeiten zu überprüfen/bestimmen
	//Umfang und Fläche werden im if und else if block deklariert weil sie da erst gebraucht werden? aber warum dann nicht gleich am anfang? effizienz?
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


//bin draufgekommen dass man für doubles %lf braucht weils floating numbers sind und %d wird nur für integers benutzt
//Bin auch draufgekommen dass es vielleicht besser ist meine deklarationen zuerst anzuführen und dann alles andere drunter.