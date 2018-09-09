
#include "helpers.h"

// <inherited.doc/>
int getln_len(long long n)
{
    if(n == 0)
    return 1;
    
    return (int) log10(n) + 1;
}
