/*
 * CS1010 AY2015/6 Semester 1 Lab2 Ex3
 * bisection.c
 * <Dhruv Jain>
 * <C07>
 * <This program receives input for 4 coefficients and 2 end-point x-values
 from the user and uses the intermediate value method, or bisection method,
 based on the midpoint of the two x-values and the polynomial function value
 of the midpoint to find the root of the polynomial funciton.>
 */

#include <stdio.h>
#include<math.h>

// Given function prototype must not be changed

double polynomial(double, int, int, int, int);
double mid_calc(double, double);

//main function:

int main(void) {
	int    c3, c2, c1, c0; // coefficients of polynomial
	double a, b,           // endpoints
		   pA, pB;         // function values at endpoints
	double m, pM;          // midpoint and function value at midpoint

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");
	scanf("%lf%lf", &a, &b);

	//do-while loop for the calculation of p(a), p(b), m and p(m) and calculation of the root:

	do
	{	pA = polynomial(a, c3, c2, c1, c0);
		pB = polynomial(b, c3, c2, c1, c0);			
		pM = polynomial(m, c3, c2, c1, c0);
		m = (a + b)/2;	

		if ( pM * pA < pM * pB ) {
			b = m;
			m = mid_calc(a,b);
			pM = polynomial(m, c3, c2, c1, c0);
		} else { 
			a = m;
			m = mid_calc(a,b);
			pM = polynomial(m, c3, c2, c1, c0);
		}
	} while (pM != 0 && fabs(a - b) >  0.0001);

	pM = polynomial(m, c3, c2, c1, c0);

	printf("root = %lf\n", m);
	printf("p(root) = %lf\n", pM);

	return 0;
}

//the function definition of the previously stated function prototype calculates the polynomial function value, based on a set of given coefficients and an x-value:

double polynomial(double a, int b, int c, int d, int e)
{	
	double result = (powf(a,3))*b  + (powf(a,2))*c  + (a*d) + e;
	return result;
}

double mid_calc(double a, double b)
{
	double f = (a + b) / 2;	
}
