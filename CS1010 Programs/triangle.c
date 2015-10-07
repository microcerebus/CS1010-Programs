#include <stdio.h>
#include <math.h>

double distance(int, int, int, int);

int main(void)
{

	int x1, y1, x2, y2, x3, y3;
	double peri;

	printf("Enter 1st point: ");
	scanf("%d%d", &x1, &y1);
	
	printf("Enter 2nd point: ");
	scanf("%d%d", &x2, &y2);
	
	printf("Enter 3rd point: ");
	scanf("%d%d", &x3, &y3);

	peri = distance(x1, y1, x2, y2) + distance(x2, y2, x3, y3) + distance(x3, y3, x1, y1);

	printf("Perimeter of Triangle = %.2lf\n", peri);	

	return 0;	
}

double distance(int a, int b, int c, int d)
{
	return sqrt((pow(d - b, 2)) + (pow(c - a,2)));

}
