#include <stdio.h>

int main()
{
	int n;
	printf("Gib eine Zahl größer als 0 ein: ");
	scanf("%i", &n);

	if (n <= 0) {
		printf("%i ist nicht größer als 0!", n);
		return 1;
	}

	while (n != 1) {
		printf("%i ", n);

		if (n % 2 == 0) {
			n = n/2;
		} else {
			n = 3*n+1;
		}
	}
	printf("%i\n", n);
	return 0;
}
