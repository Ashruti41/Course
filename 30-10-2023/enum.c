/* create enum of : GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
  take three variables XEROX, GOOGLE, EBAY from list and print it's value 
  output will be: 2
                  0
                  4  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("the enum list is: \n %d \n %d\n %d\n", xerox, google, ebay);

    return 0;
}
