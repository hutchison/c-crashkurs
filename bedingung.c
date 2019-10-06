#include <stdio.h>

int main()
{
	int alter;
	printf("Gib dein Alter ein: ");
	scanf("%i", &alter);

	if (alter >= 18) {
		printf("Lass uns was trinken!\n");
	} else {
		printf("Du bleibst bei der Ersti-Party zuhause.\n");
	}
	return 0;
}
