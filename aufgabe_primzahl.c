#include <stdio.h>

int main()
{
	int n;
	printf("Gib eine Zahl ein: ");
	scanf("%i", &n);

	if (n < 2) {
		printf("%i ist keine Primzahl.\n", n);
		return 0;
	}

	int d = 2;
	while (d < n) {
		if (n % d == 0) {
			printf("%i ist keine Primzahl.\n", n);
			return 0;
		}
		d += 1;
	}
	printf("%i ist eine Primzahl.\n", n);
	return 0;
}
