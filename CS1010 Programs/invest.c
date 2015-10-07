/**
 * CS1010 AY2015/6 Semester 1 Lab1 Ex1
 * invest.c
 * This program calculates the final amount given principal amount,
 * interest rate, and number of years, based on compound interest.
 * <Dhruv Jain>
 * <C07>
 */
#include<stdio.h>
#include<math.h>

int main(void) 
{
	int principal, rate, numYears;
	float amount;

	printf("Enter principal amount: ");
	scanf("%d", &principal);
	printf("Enter interest rate   : ");
	scanf("%d", &rate);
	printf("Enter number of years : ");
	scanf("%d", &numYears);

	amount = (((float)principal * (1 - powf(((float)rate/100),((float)numYears + 1)))/(1 - (float)rate/100)));
	printf("Amount = $%.2f\n", amount);
	return 0;
}

