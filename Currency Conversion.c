#include<stdio.h>
/* Name \- Aadil Sookia
Student ID \- 1000623907 
This is my solution to Lab 2 Part 1 */

int main(void)
{
double ConversionRate, AmountConverted, AmountDollars;
printf("Enter the conversion rate: ");
scanf ("%lf", & ConversionRate);
printf("Enter the amount to be converted (in foreign currency): ");
scanf ("%lf", & AmountConverted);
AmountDollars = ConversionRate * AmountConverted;
printf ("The amount in Canadian Dollars is: %5.2lf\n", AmountDollars);
return 0;
}
