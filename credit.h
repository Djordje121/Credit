
/* */

#define VISA "VISA"
#define MASTER_CARD "MASTERCARD"
#define AMERICAN_EXPRESS "AMEX"

typedef enum {false = 0, true = 1} bool;

typedef struct 
{
  long long cc_number;
  char *type;
  bool verified;
}
CreditCard; 

int cc_validation(CreditCard card);