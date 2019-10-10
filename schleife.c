#include <stdio.h>

int main()
{
	int i = 10;

	printf("Der finale Countdown: ");
	while (i >= 0) {
		printf("%i ", i);
		i = i - 1;
	}
	printf("\n");

	return 0;
}
