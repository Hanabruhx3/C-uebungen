#include <stdio.h>

int main() {
	int imin;
	int imax;

	printf("Bitte geben Sie das Minimum fuer Ihr Intervall ein: ");
	scanf_s("%d", &imin);
	printf("Bitte geben Sie das Maximum fuer Ihr Intervall ein: ");
	scanf_s("%d", &imax);

	while (imin < imax + 1) {
		printf("%d\n", imin);
		imin++;
	}
	return 0;
}

//first try aber ich hab den input von meinem flächen umfang combo und die intervallausgabe als referenz hergenommen.