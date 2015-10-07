/**
 * CS1010 AY2015/6 Semester 1 Lab3 Ex1
 * estimatePi.c
 * This program reads in a list of n distinct integers and
 * computes the estimate value for pi.
 * This program uses an external GCD function (provided in gcd.o).
 * <Dhruv Jain>
 * <C07>
 */

#include "gcd.h"
#include <stdio.h>
#include <math.h>

double pi(int [], int);

int main(void) {
	
	int arr[50], size, i;

	scanf("%d", &size);
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Estimated pi = %.4lf\n", pi(arr, size));

	return 0;
}

// Write a description of the function here
double pi(int arr[], int size)
{
	int i, j = 0;
	int count = 0;
	
	for (i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if (gcd(arr[i],arr[j]) == 1)
			{	
				count ++;
			} 
		}
	} 
	
	double pairs = ((size*(size-1))/2);
	double piNum = sqrt((6*pairs)/count);
	return piNum;
}

