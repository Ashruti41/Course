/* Use function in c and find greatest common divisor of two non-negative integer values and calculate absolute value of a number */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int , int);
int absoluteValue(float);

int main()
{
    int n1, n2;
    printf("Enter two values for Greatest Common Divisor\n");
    scanf("%d%d", &n1, &n2);
    gcd(n1,n2);

    float value;
    printf("\nEnter values for absolute values\n");
    scanf("%f", &value);
    absoluteValue(value);

    return 0;
}

int gcd(int x, int y)
{
    int gcd;
    for (int i = 1; i<= x && i<= y; ++i)
    {
        if(x%i==0 && y%i == 0)
        gcd = i;
    }
    printf("You entered %d and %d and your gcd = %d\n", x,y,gcd);
    return 0;
}

int absoluteValue(float i)
{
    printf("Before abs your value is %f\n", i);

    printf("After abs your value is %d\n", abs(i));

    return 0;
}

/* Output
Enter two values for Greatest Common Divisor
24 18
You entered 24 and 18 and your gcd = 6

Enter values for absolute values
-40
Before abs your value is -40.000000
After abs your value is 40
  */
