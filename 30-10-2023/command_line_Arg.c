/* perform command line argument */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numberOfArg = argc;
    char * arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Total number of argument is argc:%d\n", numberOfArg);
    printf("argv[0] is always program name:%s\n", arg1);
    printf("argv[1] to argc-1 is command op:%s\n", arg2);

    return 0;
}

/* Output
  Total number of argument is argc:2
  argv[0] is always program name:./a.out
  argv[1] to argc-1 is command op:hi
*/
