
#include "helpers.h"

// inherit.doc <see chref="helpers.h"/>
int getln_len(long long n)
{
    if(n == 0)
    return 0;
   
    if(n < 0)
    n = n * (-1);

    return  log10(n) + 1;
}
