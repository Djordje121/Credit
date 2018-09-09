
/*Library for credit card valdiation */

#define VISA "VISA"
#define MASTER_CARD "MASTERCARD"
#define AMERICAN_EXPRESS "AMEX"
#define UNKNOWN "UNKNOWN"

// simulation of bool type
typedef enum {false = 0, true = 1} bool;

typedef struct 
{
  long long cc_number;
  char *type;
  bool verified;
}
CreditCard; 

/** Validates credit card number using Hans Peter Lugn's algorithm
 *  <see ahref="https://en.wikipedia.org/wiki/Luhn_algorithm"/> 
 * <returns> true if cc number is valid or false if num. is zero or invalid </returns>
 */
bool cc_number_val(long long cc_number);

/** Validates credit card using cc number validation and card type validation,
 *  currently card types included in validation are VISA, MASTER & AMEX,
 *  validation logic is based upon starting digits & lenght of credit card number
 * <returns> struct type of credit card filled with validation data </returns>
 */
CreditCard credit_card_val(CreditCard card);