// arrays.c
// Exercise on using arrays.
#include <stdio.h>
#include<math.h>

int main(void)
{
	int a[5], b[5], i;
	
	for (i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i=4; i>-1; i--)
	{
		b[4-i] = a[i];
	}
	
	for (i=0; i<5; i++)
	{
		a[i] = b[i];
	}
	
	for (i=0; i<5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");		
}