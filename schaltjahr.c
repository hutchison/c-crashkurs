#include <stdio.h>

int main()
{
	int jahr;
	printf("Gib das Jahr ein: ");
	scanf("%i", &jahr);

	if (jahr % 4 == 0) {
		if (jahr % 100 == 0) {
			if (jahr % 400 == 0) {
				printf("%i ist ein Schaltjahr.\n", jahr);
			} else {
				printf("%i ist kein Schaltjahr.\n", jahr);
			}
		} else {
			printf("%i ist ein Schaltjahr.\n", jahr);
		}
	} else {
		printf("%i ist kein Schaltjahr.\n", jahr);
	}

	if ((jahr % 4 == 0 && jahr % 100 != 0) || jahr % 400 == 0) {
		printf("%i ist ein Schaltjahr.\n", jahr);
	} else {
		printf("%i ist kein Schaltjahr.\n", jahr);
	}

}
