#include <math.h>
#include <stdio.h>
/*Name \- Aadil Sookia
Student ID \- 1000623907
This is my solution to Lab 2 Part 3*/

int main(void)
{
const double PI  =3.141592653589793238462;
double X, Y, H, Theta;
printf("Enter X: ");
scanf("%lf", & X);
printf("Enter Y: ");
scanf("%lf", & Y);
H = sqrt((X*X) + (Y*Y));
Theta = (asin(Y/H))*(180/PI);
printf("The Hypotenuse Length is: %5.1lf\n", H);
printf("The Angle Theta is: %5.1lf degrees\n", Theta);
return 0;
}
