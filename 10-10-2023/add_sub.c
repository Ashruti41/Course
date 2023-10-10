// give two numbers that uses a fun add() to add and sub() to find difference of these two numbers and then display the sum and sub

#include <stdio.h>
int add(int, int);
int sub(int, int);
int main()
{
    int x, y, ret;
    printf("enter first number: ");
    scanf("%d", &x);
    printf("enter second number: ");
    scanf("%d", &y);
    ret = add(x, y);
    ret = sub(x, y);
    return 0;
}

int add(int a, int b)
{
    int add = 0;
    add = a + b;
    printf("%d + %d = %d\n", a, b, add);
    return 0;
}

int sub(int a, int b)
{
    int sub = 0;
    sub = a - b;
    printf("%d - %d = %d\n", a, b, sub);
    return 0;
}

/* output
enter first number: 20
enter second number: 10
20 + 10 = 30
20 - 10 = 10
  */
