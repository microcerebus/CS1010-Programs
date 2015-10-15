/*
 * CS1010 AY2015/6 Semester 1 Lab4 Ex2
 * Given a 12x12 integer array, fill it with integers, and
 * find the longest sequence of a digit that appears in 
 * the array horizontally, vertically or diagonally.
 * <Dhruv Jain>
 * <C07>
 */

#include <stdio.h>
#define DIM 12

// Fill in the function prototypes below
int scanBoard(int [][DIM]);
int search(int [][DIM], int *, int *, int);


int main(void) {
	int board[DIM][DIM] = { {0} };
	int search_digit;
	int length;           // length of the longest sequence of search digit
	int bestRow, bestCol; // where the longest sequence of search digit starts in the board

	search_digit = scanBoard(board);     //here, search_digit is assigned the return value of the function scanBoard

	length = search(board, &bestRow, &bestCol, search_digit); // similarly, length is assigned the return value (max), i.e. the max
															  // length of a sequence of search_digit.

	if (length > 0) {
		printf("Length of longest sequence = %d\n", length); 
		printf("Start at (%d,%d)\n", bestRow, bestCol);      
	}
	else
		printf("No such sequence.\n");

	return 0;
}

// This function takes the input of an empty 12*12 array and prompts 
// the user to enter such an array. Additionally, it also scans for a 
// single integer variable which is returned at the end of the function,
// as the search-digit. This digit is then used in the search function.
int scanBoard(int arr[][DIM]){
	int i, j, digit;
	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
		{
			scanf("%d", &arr[i][j]);	
		}
	}

	scanf("%d", &digit);
	return digit;
}


// This function takes in a fully filled 12*12 array,
// 2 integer pointer variables, (which point to the cartesian co-oridnates
// of the starting point of the sequence) and the search digit integer. 
// It then searches the array for either a horizontal, vertical or diagonal (down-right)
// sequence of the search digit. The function ends after returning the max length of said sequence.
int search(int arr[][DIM], int *p, int *q, int r) {

	int num = r; 
	int i, j, k, l, m;
	int max = 0;

	for (i=0;i<DIM;i++)
	{
		for (j=0;j<DIM;j++)
		{
			for (k=0;k<DIM-i;k++)
			{
				if (arr[i][j+k] != num)
					break;
				else if (k + 1> max){
					max = k+1;
					*p = i;
					*q = j;
				}
			}

			for (l=0;l<DIM-i;l++)
			{
				if (arr[i+l][j] != num)
					break;
				else if (l + 1 > max){
					max = l+1;
					*p = i;
					*q = j;
				}
			}

			for (m=0;m<DIM-i;m++)
			{
				if (arr[i+m][j+m] != num)
					break;
				else if (m + 1 > max){
					max = m+1;
					*p = i;
					*q = j;
				}
			}


		}
	}

//	printf("i = %d, j = %d, temp = %d\n", i, j, max);
	return max;
}
