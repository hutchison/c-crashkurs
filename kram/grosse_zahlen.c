#include <stdio.h>

int main()
{
	unsigned long x = 0;
	for (int i = 0; i < 64; i += 1) {
		x *= 2;
		x += 1;
		printf("\t%lu\t\t%lx\n", x, x);
	}
	x = -1;
	printf("\t%lu\t\t%lx\n", x, x);
	return 0;
}
