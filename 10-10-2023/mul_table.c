// Multiplication table of any numbers

#include <stdio.h>
int mul(int);
int main()
{
    int ret = 0;
    int x;
    printf("enter number for mul table : ");
    scanf("%d", &x);
    ret = mul(x);
    return 0;
}

int mul(int a)
{
    int mul = 0;
    for(int i = 1; i <= 10; i++)
    {
        mul = a * i; 
        printf("%d x %d = %d\n", a, i, mul);
    }
    return 0;
}

/* Output
enter number for mul table : 98
98 x 1 = 98
98 x 2 = 196
98 x 3 = 294
98 x 4 = 392
98 x 5 = 490
98 x 6 = 588
98 x 7 = 686
98 x 8 = 784
98 x 9 = 882
98 x 10 = 980
    */
