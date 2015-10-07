#include <stdio.h>

int main (void)
{	int i = 1.9;

	switch (i) {
		case 1: printf("%d ", i);
		case 2: printf("%d ", i);
		case 3: printf("%d ", i);
		default: printf("invalid");
	}
	printf("\n");
	return 0;
}
