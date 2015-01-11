#include <stdio.h>
#include <math.h>

//factorial function which is used during the summing

double factorial (int y) {

double fact = 1, j;

for (j = y; j > 0; j --)

fact *= j;


return fact;

}

//summing function

double approxSine (double x, double N) {

int i, y;

double sum = 0;

//run through loops N + 1 times
for (i = 0; i < N; i ++) {

//use y to keep the following equation clean
y= 2*i + 1;

sum += (pow(-1,i) * pow (x, y)) / factorial (y);  }

return sum;

}


int main (void) {

double N;

double low, high, step, i, j;

//demand inputs from user

printf("Enter N: ");
scanf("%lf", &N);

printf("Enter low: ");
scanf("%lf", &low);

printf("Enter high: ");
scanf("%lf", &high);

printf("Enter step: ");
scanf("%lf", &step);


//loop to calculate for all steps

for (i = low; i < high; i += step)

printf("%.2lf %.2lf\n", i, approxSine (i, N));

return 0;

}



