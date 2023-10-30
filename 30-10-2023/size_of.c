/* sizeof operator */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(char));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(long long));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));

    return 0;

}

/* output: 
  4
  1
  8
  8
  8
  16 */
