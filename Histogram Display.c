#include <stdio.h>
#include <math.h>

// Aadil Sookia, 1000623907

int main (void) {

double low, high, middle, values, bin;
double numstore [100];
int intervals, i = 0, j, k, count, count2 = 0, number;

//demand inputs

printf("Enter the limits (low high): ");
scanf("%lf %lf", &low, &high);

printf("Enter N: ");
scanf("%d", &intervals);

printf("Enter the values.\n");
scanf("%lf", &values);

//store inputs in array (sized 100), could use malloc

while (values >= low && values < high) {

numstore[i] = values;

i++;

count = i-1;

scanf("%lf", &values);

}

//equation to display bin number

number = (high - low)/intervals;

middle = ((high-low)/intervals)/2;

bin = middle + low;

printf("The histogram values are: \n");

//check every element of array with range of bins 

for (j = 0, k = number; k <= high-low ; j +=number, k+=number){

for (i = 0; i <= count; i ++) {

if ((numstore[i] >= low + j) && (numstore[i] < low + k))

count2 += 1;

}

printf("%.2lf %d\n", bin, count2); 

//reset count and adjust bin

count2 = 0;
bin += number;

}

return 0;

}



