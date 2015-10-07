// magicNumber.c
// You must write a function get_magic().
#include <stdio.h>

int get_magic(int);

	int main(void) {

		int num1, num2;

		printf("Enter 1st value: ");
		scanf("%d", &num1);
		get_magic(num1);		

		printf("Enter 2nd value: ");
		scanf("%d", &num2);
		get_magic(num2);

		return 0;
	}

int get_magic(int a) 
{
	int sum, magic;

	if(a >= 10000)
	{	
		sum = (a%10) + ((a%1000)/100) + (a/10000);
	} else if (a <= 9999 && a > 999) 
	{
		sum = (a%10) + ((a%1000)/100);
	} else  sum = (a%10) + (a/100);

	 magic = sum % 10;
	 printf("Magic number = %d\n", magic);

}
