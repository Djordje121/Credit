
#include "helpers.h"


int getln_len(long long n)
{
    return (int) log10(n) + 1;
}

int getln_len1(long long n)
{
    int counter = 0;
    long long devider = 1;
    while(n / devider != 0)
    {
        devider *= 10;
        counter ++;
    }
    return counter;
}