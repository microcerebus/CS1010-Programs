/*
 *  freezerV2.c
 *  Unit 3 Exercise 6: Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  New formula: T = (4*t^10 / (t^9+2)) - 20
 */
#include <stdio.h>
#include <math.h>

int main(void) {
		// Get the hours and minutes
		float hours, minutes;
        float time;
  
        printf("Enter hours and minutes since power failure: ");
   	    scanf("%f %f", &hours, &minutes);
 
      	time = hours +(minutes/60.0);
 
       	/*printf("Time: %f \n", time);*/

		float temperature;  // Temperature in freezer
		
		temperature = (4.00*(powf(time, 10.00)) / (powf(time, 9.00)+2.00)) - 20.00;
		printf("Temperature in the freezer = %.2f\n", temperature);
		return 0;
}

