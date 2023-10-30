/* print area of rectangle = w*h */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w, h;
    float area;

    printf("Enter width and height\n");
    scanf("%f %f", &w, &h);
    area = w * h;
    printf("Area:%f x %f = %f\n",w, h, area);

    return 0;
}

/* output:
  Enter width and height
20.1
20 
Area:20.100000 x 20.000000 = 402.000000 
  */
