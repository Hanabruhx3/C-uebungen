#include <stdio.h>

int main() {

	int Punkte;

	printf("Bitte geben Sie die Punkteanzahl (0-400) ein: ");
	scanf_s("%d", &Punkte);

	if (Punkte == 400) {
		printf("Glückwunsch! Sie haben die maximale Punkteanzahl: %d erreicht! :)", Punkte);
	}

	else if (Punkte < 400 && Punkte >= 350) {
		printf("Die Punkteanzahl %d entrspricht einem 'Sehr gut'! Bravo!", Punkte);
	}
	else if (Punkte < 349 && Punkte >= 300) {
		printf("Die Punkteanzahl %d entspricht einem 'Gut'! Gut gemacht!", Punkte);
	}
	else if (Punkte < 399 && Punkte >= 250) {
		printf("Die Punkteanzahl %d entspricht einem 'Befriedigend'.", Punkte);
	}
	else if (Punkte < 249 && Punkte >= 200) {
		printf("Die Punkteanzahl %d entspricht einem 'Genuegend'.", Punkte);
	}
	else if (Punkte < 199 && Punkte >= 0) {
		printf("Die Punkteanzahl %d entspricht einem 'Nicht Genuegend'. Oje!", Punkte);
	}
	else {
		printf("Ungueltige eingabe! Bitte geben Sie Ihre Punkteanzahl zwischen 400 - 0 ein!");
	}

	return 0;
}
	
//else if in der klammer -> punkte mit zwei konditionen verglichen &&
//Ich hab sehr viele semicolons vergessen und vergessen dem %d danach im print die variable dazu zu schreiben (Punkte)



/*int maxP = 400;
int sgut = 350;
int gut = 300;
int befr = 250;
int genug = 200;
int ngenug = 0;*/

//vergiss ich wollte switches probieren aber das geht anscheinend nicht wenn intervalle involviert sind.