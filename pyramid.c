/**
 * CS1010 AY2015/6 Semester 1 Lab4 Ex1
 * pyramid.c
 * This program computes the maximum-value path
 * in a triangular matrix.
 * <Dhruv jain>
 * <C07>
 */


/*
 * Problems:
 *
 * 1. scanf a 2d array based on user input
 * 2. print the array (alr done)
 * 3. compute maxPathValue:
 *      for(i = size-2 to 0, i--):
 *          for (j=0 to j<i, j++):
 *          arr[i][j] += fmax((arr[i+1][j], arr[i+1][j+1]));
 */


#include <stdio.h>
#include <math.h>
#define MAX_ROWS 10

int maxPathValue(int [][MAX_ROWS], int);
int scanTriangularArray(int [][MAX_ROWS]);
void printTriangularArray(int [][MAX_ROWS], int);

int main(void) {
	int size; // number of rows
	int table[MAX_ROWS][MAX_ROWS];
	int r, c;

        scanTriangularArray(table);
        maxPathValue(table, size);
	printf("Maximum path value = %d\n", maxPathValue(table, size));

	return 0;
}

// Compute the path that gives the maximum value
int maxPathValue(int arr[][MAX_ROWS], int size) {
    int a, b;

    for (a = size-2; a >= 0 ; a--) {
        for (b = 0; b <= a; b++) {
            arr[a][b] += fmax((arr[a+1][b]), (arr[a+1][b+1]));
        }
    } return arr[0][0];
}

// Read data into 2-dimensional triangular array arr,
// and return the number of rows.
int scanTriangularArray(int arr[][MAX_ROWS]){
        int i, j, size;
        
        printf("Enter number of rows:\n"); //Prompts user to input number of rows 
        scanf("%d", &size);               // which is also the length of triangle.
       
        for (i = 0; i < size; i++) {                 // Asks user to input values
            for (j = 0; j < MAX_ROWS; j++) {    // for the array, arr[], from
                scanf("%d", &arr[i][j]);            // the first row till (size), 
                                                    // which is user defined.
            }
        }
}

// Print elements in the 2-dimensional triangular array arr.
// For checking purpose.
void printTriangularArray(int arr[][MAX_ROWS], int size) {
	int r, c;

	for (r = 0; r < size; r++) {
		for (c = 0; c <= r; c++) {
			printf("%d\t", arr[r][c]);
		}
		printf("\n");
	}
}

