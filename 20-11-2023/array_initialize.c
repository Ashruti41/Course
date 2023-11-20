/* In this code it is simply shows how to use int array and char array in our code. */

#include <stdio.h>
#include <stdlib.h>

#define MONTH 12

int main()
{
    int days[MONTH] = {31,28,31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    char *month_name[MONTH] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(int index = 0; index < MONTH; index++)
    {
        printf("%s has %2d days. \n", month_name[index], days[index]);
    }

    return 0;
}

/* Output
January has 31 days. 
February has 28 days. 
March has 31 days. 
April has 30 days. 
May has 31 days. 
June has 30 days. 
July has 31 days. 
August has 31 days. 
September has 30 days. 
October has 31 days. 
November has 30 days. 
December has 31 days.
*/
