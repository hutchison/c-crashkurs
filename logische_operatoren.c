#include <stdio.h>

int main()
{
	int x = 13;
	if ((x >= 11) && (x % 2 != 0)) {
		printf("%i erfüllt die Bedingungen.\n", x);
	}

	return 0;
}
