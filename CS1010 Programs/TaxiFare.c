// TaxiFare.c
// This program computes taxi fare.
#include <stdio.h>
#include <math.h>
#define INCREMENT 0.22

float computeFare(int, int, int);

int main(void) {    
	int dayType; // 0 = weekends and public holidays;
	             // 1 = weekdays and non public holidays
	int boardHour, boardMin; // hour and minute of boarding
	int boardTime;           // converted from boardHour and boardMin
	int distance;            // distance of journey

	printf("Day type: ");
	scanf("%d", &dayType);
	printf("Boarding hour and minute: ");
	scanf("%d %d", &boardHour, &boardMin);
	printf("Distance: ");
	scanf("%d", &distance);

	// complete the next line
	boardTime = (boardHour * 60) + boardMin;
	printf("Boarding time is %d minutes\n", boardTime);

	printf("Total taxi fare is $%.2f\n", 
	       computeFare(dayType, boardTime, distance));
	return 0;
}

// Compute taxi fare based on
//   type: 0 = weekends and PH; 1 = weekdays
//   time: time passenger boarded taxi (in minutes from 0:00hr)
//   dist: distance of journey
// This function is called a stub as it returns a dummy value
float computeFare(int type, int time, int dist) {

/* 2 problems:
 *
 *  1. Compute fare
 *      - float basicFare --> if dist <= 10200 then float bF = 3.40 + (((float)dist/400)*0.22)
 *      - else if dist >10200, then float bF = 3.40 + ((10200/400) * 0.22) + (((float)(dist - 10200)/350) * 0.22)
 *      - check dayType (0 or 1)
 *      - if 0 then if boardTime >= 1080  then totalFare = 1.25*bF else if boardTime <= 359 then totalFare = 1.5*bF else tF = bF
 *      - if 1 then if boardTime >= 1080  then totalFare = 1.25*bF else if boardTime >= 360 and <= 570 then tF = bF*1.25 else if boardTime <= 359 then totalFare = 1.5*bF else tF = bF
 *  2. Print time since 0:00 hours
 */
    float basicFare, totalFare;

    if (dist <= 10200 && dist > 1000) {
        basicFare = 3.40 + ((dist - 1000)/400)*0.22;
        if (((dist - 1000) % 400) != 0) {
            basicFare += 0.22;
        }
    } else if (dist > 10200 && dist > 1000) {
        basicFare = 3.40 + 5.06 + ((dist - 10200)/350)*0.22;
        if (((dist - 10200) % 350) != 0) {
            basicFare += 0.22;
        }
    } else if (dist <= 1000) {
        basicFare = 3.40;
    }
    if (type == 0) {
        if (time >= 1080) {
            totalFare = (1.25*basicFare);
           totalFare = round((totalFare*100)/100);
        } else if (time <= 359) {
            totalFare = (1.5 * basicFare);
           totalFare = round((totalFare*100)/100);
        } else {
            totalFare = basicFare;
        }
    }
    if (type == 1) {
        if (time >= 1080){
            totalFare = (1.25*basicFare);
            totalFare = round((totalFare*100)/100);
        } else if (time >= 360 && time <= 570) {
            totalFare = (1.25*basicFare);
            totalFare = round((totalFare*100)/100);
        } else if (time <= 359) {
            totalFare = (1.5*basicFare);
            totalFare = round((totalFare*100)/100);
        } else {
            totalFare = basicFare;
        }
    }
    return totalFare;
}

