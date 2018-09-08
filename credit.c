
#include <stdio.h>
#include "system.h"
#include "credit.h"
#include "helpers.h"

int getln_len(long long n);
int main(void)
{ 
    CreditCard card;
   /* propmp user for positive number */
  
    printf("enter cc number: ");
    card.cc_number = get_long_long();
    printf("card : %lli\n", card.cc_number);
     
    cc_validation(card);
   
   return (0);
}

int cc_validation(CreditCard card)
{
    if(card.cc_number == 0)
    return 1;

    int len = getln_len(card.cc_number);
    int i = 1,  dg_counter = 0, sum1 = 0, sum2 = 0;
    long c1 = 0;
    while(i <= len)
    {
      long p =(long) pow(10, i);
      c1 = card.cc_number % p / (p / 10);
      if(i % 2 == 0)
      {               
        if(c1 > 9)
        c1 = c1 % 10 + c1 % 100 / 10;

        sum1 += c1;
      }
      else   
      {         
          sum2+= c1;
      }

      i++;
    }

    printf("sum1: %i\n", sum1);
    printf("sum2: %i\n", sum2);
    printf("validaiton: %i\n", sum1 + sum2);
    return 5;
}

