#include <stdio.h>

int main() {
	int i = 1;									//Funktion i f�r intervall soll bei 1 beginnen

	while (i < 26) {							//W�hrend i kleiner als 26 soll die zahl ausgegeben werden (26 wird in diesem fall nicht ausgeben weil diese gleich 26 ist und nicht kleiner
		printf("%d\n", i);
		i++;									//erh�ht den aktuellen i wert um 1
	}
	return 0;
}

//ich weiss noch immer nicht wann ich die semicolons setzten muss und hab sie nach dem i++ vergessen
