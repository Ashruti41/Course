/* converts min into days and year */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min = 0;
    double day = 0.0;
    double year = 0.0;
    double minInyear = 0.0;
    printf("Enter the number of min: \n");
    scanf("%d", &min);
    
    minInyear = (24 * 60 * 365);
    day = (min / 1440);     //1440 = 24 * 60 
    year = (min / minInyear);   
    
    printf("enter min is %d and it's equivalent day is %f and year is %f\n", min, day, year);
    return 0;

}
/* Output
Enter the number of min: 
525600
enter min is 525600 and it's equivalent day is 365.000000 and year is 1.000000

  or

Enter the number of min: 
1440
enter min is 1440 and it's equivalent day is 1.000000 and year is 0.002740

  */
