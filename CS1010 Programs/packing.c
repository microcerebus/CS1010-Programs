/**
* CS1010 AY2015/6 Semester 1 Lab1 Ex3
* packing.c
* <This program calculates the maximum number of slabs that can be packed in a tray>
* <Dhruv Jain>
* <C07>
*/

#include <stdio.h>

// Write your function prototype below (and remove this comment!)

int compute_max_slabs(int, int, int, int);

int main(void) {
	int max_slabs, lt_tray, wt_tray, lt_slab, wt_slab;

printf("Enter dimension of tray: ");
	scanf("%d%d",&lt_tray, &wt_tray);
	printf("Enter dimension of slab: ");
	scanf("%d%d", &lt_slab, &wt_slab);

	max_slabs = compute_max_slabs(lt_tray, wt_tray, lt_slab, wt_slab);
	
	printf("Maximum number of slabs = %d\n", max_slabs);

	return 0;
}

// Add your function below (and remove this comment!)
// Every function should be preceded with a comment
// that describes what the function does.

int compute_max_slabs(int a, int b, int c, int d)
{
	int rows = (a/c);
	int columns = (b/d);
	int	max_1 = rows * columns;

	rows = (a/d);
	columns = (b/c);
	int max_2 = rows * columns;

	if(max_1 > max_2) 
	{
		return max_1;		
	}

	else return max_2;


}
