/* Lesson for 2_1 */

#include <stdio.h>
void main (void)
{
    int month; 
    float expense, income;
 
    month = 12; 
    expense = 111.1;
    income = 100.;

    printf ("Month=%2d, Expense=$%9.2f\n", month, expense);

    month = 11; 
    expense = 82.1;

    printf ("For the %2dth month of the year\n"
            "the expenses were $%5.2f \n"
            "and the income was $%6.2f\n\n", month, expense, income);
}


