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
