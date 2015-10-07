#include <stdio.h>

void swap (int* a, int* b);

int main()
{
	int x,y;
	printf("How many numbers do you want to sort?:\n");
	scanf("%d", &x);

	int elements[1000];

	for (int i=0; i<x; i++) {
		printf("#%d:" , i+1);
		scanf("%d", &elements[i]);
	}            
	for (int i = 0; i<x-1; i++) {    
		for (int i = 0; i < x-1; i++) {
			if (elements[i] > elements[i+1]) {
				swap(&elements[i], &elements[i+1]);

			}

		}
	}
	for(int i = 0; i < x; i++) {
		printf("%d ", elements[i]);
	}
	return 0;
}

void swap(int* a, int* b) { 
	int c = 0;
	c = *a;
	*a = *b;
	A
	*b = c;
}
