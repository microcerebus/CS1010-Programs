#include<stdio.h>

int main(void)
{	int n , i;
	int sum=0;

	printf("Enter a number:");
	scanf("%d\n",&n);
	
	for(i=0; i<n+1;i++){
		sum += i; // sum = sum + i
		}	
	printf("The sum of %d numbers is %d.\n",n,sum);
	return 0;
}
