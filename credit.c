
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
    
    card = credit_card_val(card);
    printf("num: %lli\ntype: %s\nverified: %s\n"
    ,card.cc_number, card.type, card.verified ? "true" : "false");
    
   return (0);
}

// inherit.doc <see chref="credit.h"/>
CreditCard credit_card_val(CreditCard card)
{
   card.verified = false;
   card.type = UNKNOWN;
   if(cc_number_val(card.cc_number)) // card number is valid, checking type validation
   {  
       int len = getln_len(card.cc_number);
       int digits = card.cc_number % (long) pow(10, len) / pow(10, len - 2);
       card.verified = true;
       
       if(len >= 13 && len <= 16)
       {
           if(digits % 10 == 4)          
              card.type = VISA;
           
           else if((digits == 34 || digits == 37) && len == 15)         
              card.type = AMERICAN_EXPRESS;
           
           else if((digits >= 51 && digits <= 55 && len == 16))           
               card.type = MASTER_CARD;
           
           else  card.verified = false;
       }
   } 
   return card; 
}

// inherit.doc <see chref="credit.h"/>
bool cc_number_val(long long cc_number)
{
    if(cc_number == 0)
    return false;

    int len = getln_len(cc_number);
    int i = 1,  dg_counter = 0, sum = 0;
    long digit = 0;
    bool num_verified = false;
    while(i <= len)
    {
      long p =(long) pow(10, i);
      digit = cc_number % p / (p / 10);
      if(i % 2 == 0)
      {     
        digit *= 2;          
        if(digit > 9)
        digit = digit % 10 + digit % 100 / 10;

        sum += digit;
      }
      else sum += digit;    
      i++;
    }
    if(sum % 10 == 0)
    num_verified = true;

   return num_verified;
}
