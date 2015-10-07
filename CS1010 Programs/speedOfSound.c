// speedOfSound.c
// Read a temperature and compute the speed of sound in air.
// You must write a function speed_of_sound().
#include <stdio.h>
#include <math.h>



int main(void) {
    float degree, speed;  

    printf("Temperature in degree Fahrenheit: ");
    scanf("%f", &degree);

	speed = 1086 * (sqrt(((5*degree) + 297) / 247));
	printf("Speed of sound in air of %.2f degree = %.2f ft/sec\n", degree, speed);


    return 0;
}

