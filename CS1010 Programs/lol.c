#include<stdio.h>
#include<math.h>

int main(void)
{
	int hours, minutes;
	float time;

	printf("Enter hours and minutes since power failure: ");
	scanf("%d %d", &hours, &minutes);

	time = hours +(minutes/60.0);

	printf("Time: %f /n", time);

	return 0;

}

