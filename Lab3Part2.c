#include <stdio.h>
#include <math.h>
int main (void) { 

/* Name \- Aadil Sookia
Student ID \- 1000623907
This is my solution to Lab3Part2 */

char letter;
double input, angle, radians, output;
const double PI = 3.141592653589793238462;

printf("Enter the desired operation: \n");
scanf("%c", &letter);
   if ((letter != 's') && (letter != 'c') && (letter != 't') && (letter != 'e') && (letter != 'n'))  {
   printf("This operation is not supported.\n");
   return 0;
   }

   if (letter == 's') {
   printf("Enter the angle in degrees: \n");
   scanf("%lf", &input);
   radians = input*(PI/180);
   angle = sin(radians);
   printf("The sine of %.2lf RAD is %.2lf.\n", radians, angle);
   }

   if (letter == 'c') {
   printf("Enter the angle in degrees: \n");
   scanf("%lf", &input);
   radians = input*(PI/180);
   angle = cos(radians);
   printf("The cosine of %.2lf RAD is %.2lf.\n", radians, angle);
   }

   if (letter == 't') {
   printf("Enter the angle in degrees: \n");
   scanf("%lf", &input);
   radians = input*(PI/180); 
      if ((((int)input/90)%2) == 1){
      printf("The tangent of %.2lf RAD is undefined.\n", radians);
      return 0;
      }
   else angle = tan(radians);
   printf("The tangent of %.2lf RAD is %.2lf.\n", radians, angle);
   }

  if (letter == 'e') {
  printf("Enter the number: \n");
  scanf("%lf", &input);
  output = exp(input);
  printf("The exponential of %.2lf is %.2lf. \n", input, output);
  }
  if (letter == 'n') {
  printf("Enter the number: \n");
  scanf("%lf", &input);
  output = log(input);
  printf("The natural log of %.2lf is %.2lf. \n", input, output);
  }
printf("\n");
return 0;

} 
 


