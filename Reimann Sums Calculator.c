#include <stdio.h>
#include <math.h>

double Polynomial (double x, double a, double b, double c, double d, double e) {

double Fx = a*pow(x,4) + b*pow(x,3) + c*pow(x,2) + d*x + e;

return Fx;

}

int main (void) {

double a, b, c, d, e, low, high, x, sum = 0, integral;
int intervals, i;

printf("Enter the coefficients (a b c d e): ");
scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

printf("Enter the integral limits (low high): ");
scanf("%lf %lf", &low, &high);

printf("Enter the number of subintervals (n): ");
scanf("%d", &intervals);

for (i = 1; i <= intervals-1; i++)

sum += Polynomial (low + i * (high-low)/intervals, a, b, c, d, e);

integral = ((high - low)/intervals) * (Polynomial (low, a, b, c, d, e)/2 + Polynomial (high, a, b, c, d, e)/2 + sum);

printf("The value of the integral is: %.2lf\n", integral);


return 0;

}
 
