#include <stdio.h>

int main()
{
	int alter;
	printf("Wie alt bist du? ");
	scanf("%i", &alter);
	printf("%i Jahre? Dann hast du noch %i Jahre bist du %i bist!\n",
		alter, ((alter/10)+1)*10 - alter, ((alter/10)+1)*10
	);

	return 0;
}
