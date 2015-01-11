#include <stdio.h>
#include <math.h>
int main (void) {
/* Name \-Aadil Sookia
Student ID \-1000623907
This is my solution to Lab3Part1 */

int age, heartrate10, heartrate;
double height, weight, newheight, newweight, BMI;
char unit, a;

//user enters age. if not 18-25, return 0
printf("Enter your age in years: \n");
 scanf("%d", &age);
   if ((age > 25) || (age < 18)) {
   printf("Enter an age between 18 and 25.\n");
   return 0; 
   }

//user enters heart rate
printf("Enter your 10 second resting heart rate: \n");
 scanf("%d", &heartrate10);

//user enters height
printf("Enter your height with unit: \n");
 scanf("%lf%c%c", &height, &unit, &a);

if (unit == 'i')
newheight = height/39.37;
if (unit == 'f')
newheight = height/3.28;
if (unit == 'c')
newheight = height/100;
if (unit == 'm')
newheight = height;

//user enters weight
printf("Enter your weight with unit: \n");
 scanf("%lf%c%c", &weight, &unit, &a);

if (unit == 'l')
newweight = weight * 0.4535;
else newweight = weight;

//BMI is calculated and adjusts message depending on BMI
BMI = rint((newweight/(newheight*newheight))*10)/10;
heartrate = heartrate10 * 6;

if (BMI<16.5)
printf("Your BMI is %.2lf. You are severely underweight.\n", BMI);
  if ((BMI >= 16.5) && (BMI <=18.4))
  printf("Your BMI is %.2lf. You are underweight.\n", BMI);
if ((BMI >18.4) && (BMI <=24.9))
printf("Your BMI is %.2lf. You have normal weight.\n", BMI);
  if ((BMI > 24.9) && (BMI <=29.9))
  printf("Your BMI is %.2lf. You are overweight.\n", BMI);
if (BMI >30.0)
printf("Your BMI is %.2lf. You are obese.\n", BMI);

//heartrate is calculated and adjusts message depending on input heartrate
if (heartrate <= 60)
printf("Cardio fitness is excellent. Resting heart rate is %d.\n", heartrate);
  if ((heartrate > 60) && (heartrate <= 70))
  printf("Cardio fitness is good. Resting heart rate is %d.\n", heartrate);
if ((heartrate > 70) && (heartrate <=75))
printf("Cardio fitness is average. Resting heart rate is %d.\n", heartrate);
  if (heartrate > 75)
  printf("Cardio fitness is poor. Resting heart rate is %d.\n", heartrate);



return 0;
}
