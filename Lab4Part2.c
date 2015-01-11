#include <stdio.h>
#include <math.h>

int main (void) {

//assign variables - factor should be double

double Factor1, Factor2, Prime1, Prime2, anothernumber, anothernumber2;
int Input, divisor, divisor2;

//demand input from user
printf("Enter input integer above 0: ");
scanf("%d", &Input);

//begin loop if input>0
while (Input > 0) {

//input values to check condition of next while loop
Factor1 = 5568.22; 
Prime1 = 4452.3;
divisor = (double)sqrt(Input);

//start loop to find first factor
while (divisor>1 && (Factor1 - Prime1) != 0.0) {

//necessary to see if Factor1 is an integer
Factor1 = (double)Input/divisor;
Prime1 =(double)((int)Factor1);

divisor--;
}

//start new loop to see if Factor2 is prime or not
Factor2 = (double)Input/Factor1;
divisor2 = (double)sqrt(Factor2);
anothernumber = 564654.2;
anothernumber2 = 4422.2;

while (divisor2>1 && (anothernumber - anothernumber2) != 0.0) {

anothernumber = (double)Factor2/divisor2;
anothernumber2 = (double)((int)anothernumber);

divisor2--;

}

//if factor is an integer, it is a prime
if (Factor1 == Prime1 && anothernumber2 != anothernumber) {


Prime2=Input/Prime1;

printf("The Integer %d is Semiprime, with the two primes being %.0lf and %.0lf\n", Input, Prime2, Prime1);

}

//if factor is not an integer, it is not semiprime
else printf("The Integer %d is not Semiprime\n", Input);

//demand for input again
printf("Enter input integer above 0: ");
scanf("%d", &Input);

}

//close program
printf("All Done.\n");

return 0;

}
