#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void) {
	int i, max, min, a[SIZE];

	srand(time(NULL));
	
	for(i=0;i<SIZE;i++)
		a[i] = rand();
	
	min = a[0];
	max = a[0];

	for(i=0;i<SIZE;i++)
	{	printf("%d\n", a[i]);
		if(a[i] < min)
		{	min = a[i];	
		}
		else if (a[i] > max)
		{	max = a[i];
		}
	}
	printf("min = %d, max = %d\n", min, max);
	return 0;
}	

