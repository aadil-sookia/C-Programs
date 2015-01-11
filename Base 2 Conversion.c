#include<stdio.h>
/* Name \- Aadil Sookia
Student ID \- 1000623907
This is my solution to Lab 2 Part 2*/

int main(void)
{
int Base10, MSD, ND1, ND2, LSD;

printf("Enter number to convert to base 2: ");
scanf ("%d", & Base10);
printf("The four digits of that number are as follows:");
MSD = Base10/8;
printf("\nMost significant digit: %d", MSD);
ND1 = ((Base10%8)/4);
printf("\nNext digit: %d", ND1);
ND2 = (((Base10%8)%4)/2);
printf("\nNext digit: %d", ND2);
LSD = ((Base10%8)%2);
printf("\nLeast significant digit: %d\n", LSD);



return 0;
}

