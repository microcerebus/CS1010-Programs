// square_matrix.c
// To check if a square matrix is a diagonal matrix
// or an upper-triangular matrix.
#include <stdio.h>
#define MAX_ROW 10
#define MAX_COL 10

void scanMatrix(int [][MAX_COL], int);
void printMatrix(int [][MAX_COL], int);
int is_diagonal(int [][MAX_COL], int);
int is_upper_triangular(int [][MAX_COL], int);

int main(void) {
	int matrix[MAX_ROW][MAX_COL]; 
	int size;

	scanf("%d", &size);
	scanMatrix(matrix, size);
	printf("Matrix read:\n");
	printMatrix(matrix, size);

	// Complete the program

	if (is_diagonal(matrix, size))
		printf("Matrix is a diagonal matrix.\n");
	else 
		printf("Matrix is not a diagonal matrix.\n");

	if (is_upper_triangular(matrix, size))
		printf("Matrix is an upper triangular matrix.\n");
	else 
		printf("Matrix is not an upper triangular matrix.\n");

	return 0;
}

// Return 1 if matrix is diagonal, otherwise return 0.
int is_diagonal(int mtx[][MAX_COL], int size) {
	/*	
		set count = 0. for mtx[i][j] if i == j and if corner(mtx, size) != 1, 
		check if i+a from a=1 to a=i, j == 0, && i, j+b == 0, from b=1 to b=j. if yes; cont. 
		if no, count++. if count!=0; return 0 else return 1

		define corner (mtx[][max
	 */


	int i, a, b;

	for (i=0; i<size; i++)
	{
		for(a=1;a<size;a++)
		{
			if (mtx[i][i+a])
				return 0;
		}	

		for (b=1; b<size; b++)
		{	
			if (mtx[i+b][i])
				return 0;

		}	
	}
	return 1;
}

// Return 1 if matrix is upper-triangular, otherwise return 0.
int is_upper_triangular(int mtx[][MAX_COL], int size) {
	// Complete the code
	int row, col;
	for (row=0; row<size; row++)
	{	
		for (col=0; col<size; col++) 
		{
			if (row > col)
			{
				if (mtx[row][col])
					return 0;
			}
		}

	}
	
	return 1; // 
}

// To read values into mtx
void scanMatrix(int mtx[][MAX_COL], int size) {
	int row, col;

	for (row=0; row<size; row++)
		for (col=0; col<size; col++) 
			scanf("%d", &mtx[row][col]);
}

// To print values of mtx
void printMatrix(int mtx[][MAX_COL], int size) {
	int row, col;

	for (row=0; row<size; row++) {
		for (col=0; col<size; col++) 
			printf("%4d", mtx[row][col]);
		printf("\n");
	}
}

