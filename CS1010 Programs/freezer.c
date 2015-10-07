/*
 *  freezer.c
 *  Unit 3 Exercise 5: Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  Formula: T = (4*t^2 / (t+2)) - 20
 */
#include <stdio.h>
#include <math.h>

int main(void) {
	float hours, minutes, time;
	float temperature;  // Temperature in freezer

	// Get the hours and minutes
	printf("Enter hours and minutes since power failure: ");
	scanf("%f %f", &hours, &minutes);
	
	time = hours + (minutes/60.0);
	
	temperature = (4*(powf(time,2)))/(time+2) - 20;
	printf("Temperature in freezer = %.2f\n", temperature);
	

	return 0;
}

