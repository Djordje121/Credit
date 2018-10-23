# Credit 

Simple credit card validation simulation inspired by CS50 problem set https://docs.cs50.net/2018/x/psets/1/credit/credit.html

Credit card validtion by Hans Peter Lugn's algorithm 
https://en.wikipedia.org/wiki/Luhn_algorithm

1.Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products' digits together.

2.Add the sum to the sum of the digits that weren’t multiplied by 2.

3.If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

Example with AmEx: 378282246310005.

For the sake of discussion, I will put in parentheses every other digit, starting with the number’s second-to-last digit:

3 [7] 8 [2] 8 [2] 2 [4] 6 [3] 1 [0] 0 [0] 5

Okay, let’s multiply each of the parentheses digits by 2:

7•2 + 2•2 + 2•2 + 4•2 + 3•2 + 0•2 + 0•2

That gives us:

14 + 4 + 4 + 8 + 6 + 0 + 0

Now let’s add those products' digits (i.e., not the products themselves) together:

1 + 4 + 4 + 4 + 8 + 6 + 0 + 0 = 27

Now let’s add that sum (27) to the sum of the digits that weren’t multiplied by 2:

27 + 3 + 8 + 8 + 2 + 6 + 1 + 0 + 5 = 60

Yup, the last digit in that sum (60) is a 0, so my card is legit!