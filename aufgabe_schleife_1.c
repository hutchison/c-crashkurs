#include <stdio.h>

int main()
{
	int summe = 0;
	int i = 0;

	while (i < 1000) {
		if (i % 3 == 0 || i % 5 == 0) {
			summe += i;
		}
		i += 1;
	}
	printf("%i\n", summe);

	return 0;
}
