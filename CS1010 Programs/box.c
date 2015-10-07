/**
 * CS1010 AY2015/6 Semester 1 Lab1 Ex2
 * box.c
 * <I don't know why it works and I don't know why it doesn't>
 * <Dhruv Jain>
 * <C07>
 */

#include <stdio.h>
#include <math.h>
// Write your function prototypes below (and remove this comment!)

int compute_surface_area(int, int, int);
double compute_diagonal(int, int, int);

int main(void) 
{		
	int lt, wt, ht;		

	printf("Enter length: ");
	scanf("%d", &lt);
	printf("Enter width : ");
	scanf("%d", &wt);
	printf("Enter height: ");
	scanf("%d", &ht);
	// fill in your code below (and remove this comment!)

	int surface_area = compute_surface_area(lt, wt, ht);
	printf("Surface area = %d\n", surface_area);

	double diagonal = compute_diagonal(ht, wt, lt);
	printf("Diagonal = %.2f\n", diagonal);
	return 0;
}

// Add your functions below (and remove this comment!)
// Every function should be preceded with a comment
// describing what the function does.

int compute_surface_area(int a, int b, int c)
{
	int area = 2*((a*b) + (b*c) + (a*c));
	return area;
}
double compute_diagonal(int x, int y, int z)
{

	double diagonal = sqrt((double)((x*x) + (y*y) + (z*z)));
	return diagonal;
}
