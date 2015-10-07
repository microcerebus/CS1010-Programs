/**
 * CS1010 AY2015/6 Semester 1 Lab2 Ex1
 * candles.c
 * <Fill in a description of this program>
 * <Dhruv Jain>
 * <C07>
 */

#include <stdio.h>

// Write your function prototype below (and remove this comment!)

int count_candles(int, int);

int main(void) {

	int n, k;

	printf("Enter number of candles and \n");
	printf("number of residuals to make a new candle: ");
	scanf("%d%d", &n, &k);
	printf("Total candles burnt = %d\n", count_candles(n,k));

	return 0;
}

// Add your function below (and remove this comment!)
// Every function should be preceded with a comment
// that describes what the function does.
// Also include the precondition for this function.

int count_candles(int n, int k)
{
	
	int count = n;
	
	while(n >= k) 
{
	
	n = n- k;
	n++;
	count ++;
	
}
	return count;	
	
}
