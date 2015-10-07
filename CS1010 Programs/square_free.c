// CS1010 AY2015/16 Semester 1
// PE1 Ex2: square_free.c
// Name: Dhruv Jain 
// Matriculation number: A0135797
// Discussion group: C07 
// Description: This program receives 4 integer values from the user, which correspond to 2 ranges and checks which range has more numbers whose factors do no contain squares.

#include <stdio.h>
#include <math.h> // optional, remove if not used
int square(int);

int sq_free(int);

int check(int, int);

int main(void) {
	int lower1, upper1, lower2, upper2;

	printf("Enter four positive integers: ");
	scanf("%d%d%d%d", &lower1, &upper1, &lower2, &upper2);

	int sf1 = check(lower1, upper1);
	int sf2 = check(lower2, upper2);

	if (sf1 > sf2)
	{
		printf("Range [%d, %d] has more square-free numbers: %d\n", lower1, upper1, sf1);
	} else if (sf1 < sf2) printf("Range [%d, %d] has more square-free numbers: %d\n", lower2, upper2, sf2);

	else printf("Both ranges have the same number of square-free numbers: %d\n", sf1);
	
	return 0;
}


//to check if a number is square-free:

int sq_free(int n)
{	
	int output = 1;
	int i;
	for (i=2;i <= n; i++)
	{
		if (square(i) == 0 && n%i == 0)
		{
			 output = 0;
			 break;
		} 	

	}

	return output;
}

//to check whether a number is a square:

int square(int i)
{
	int temp = sqrt(i);
	int output;
	if (temp * temp == i)
	{
		 output = 0;	

	} else output = 1;

	return output;
}

// to check how many square free numbers are within a certain range:

int check(int a, int b)
{
	int count = 0;
	int i;
	for (i = a; i <= b; i++)
	{
		if (sq_free(i) == 1)
		{
			count++;			

		}
		
		
	} return count;
}
