/* Print prime numbers between 3-100 and print hardcoded first to prime numbers */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int p = 0;
    int i = 0;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime = false;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0;  i < primeIndex;  ++i )
         printf ("%i  ", primes[i]);

    printf("\n");
    return 0;
}

/* Output
2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97 
*/
