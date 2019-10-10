#include <stdio.h>

int main()
{
	int n;
	printf("Gib eine Zahl größer als 0 ein: ");
	scanf("%i", &n);

	if (n <= 0) {
		printf("%i ist nicht größer als 0.\n", n);
		return 1;
	}

	int i = 1;
	while (i <= n) {
		printf("#");
		i += 1;
	}
	printf("\n");

	i = 2;
	int j;
	while (i < n) {
		printf("#");

		j = 2;
		while (j < n) {
			printf(" ");
			j += 1;
		}

		printf("#\n");

		i += 1;
	}

	if (n > 1) {
		i = 1;
		while (i <= n) {
			printf("#");
			i += 1;
		}
		printf("\n");
	}

	return 0;
}
