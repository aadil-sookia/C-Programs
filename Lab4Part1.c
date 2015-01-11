# include <stdio.h>

int main (void) {

int Input, MovieNumber = 1,Star;
char a,b,c,d;

//need Input to begin or exit loop
   printf("Enter movie rating from 0 to 100: ");
   scanf("%d", &Input);

//enter loop if within range
while ((Input >= 0) && (Input <= 100)) { 

//assign number of stars to ratings
{
 if ((Input >= 0) && (Input <= 19))
    Star = 0;

 if ((Input >=20) && (Input <= 39))
    Star = 1;

 if ((Input >=40) && (Input <= 59))
    Star = 2;

 if ((Input >=60) && (Input <= 79))
    Star = 3;

 if (Input >=80)
    Star = 4;
  
}

//assign stars to ratings
{
if (Input>=20 && Input<=39)
a = '*';
if (Input>=40 && Input <=59)
a = '*', b = '*';
if (Input>=60 && Input <=79)
a = '*', b ='*', c = '*';
if (Input>=80)
a = '*', b = '*', c = '*', d = '*';
}

//determine if should be star or stars
if ((Input >=20) && (Input <=39)) 
printf("Movie number %d rated at %d%% has %d star: %c\n", MovieNumber, Input, Star, a);

else if ((Input>=0) && (Input<20))
printf("Movie number %d rated at %d%% has %d stars:\n", MovieNumber, Input, Star);

else if (Input >=20 && Input <=39)
printf("Movie number %d rated at %d%% has %d stars: %c\n", MovieNumber, Input, Star, a);

else if (Input >=40 && Input <=59)
printf("Movie number %d rated at %d%% has %d stars: %c%c\n", MovieNumber, Input, Star, a, b);

else if (Input >=60 && Input <=79)
printf("Movie number %d rated at %d%% has %d stars: %c%c%c\n", MovieNumber, Input, Star, a, b, c);
else if (Input >=80)
printf("Movie number %d rated at %d%% has %d stars: %c%c%c%c\n", MovieNumber, Input, Star, a, b, c, d);

//determine if movie is ROTTEN or FRESH
if (Input>=60)
printf("Rotten Tomatoes says this movie is FRESH\n\n");
else
printf("Rotten Tomatoes says this movie is ROTTEN\n\n");
 
//ask for input once again
   printf("Enter movie rating from 0 to 100: ");
   scanf("%d", &Input);
   
//increment MovieNumber
   MovieNumber++;

}

//exit program with Goodbye
printf("Goodbye.\n");

return 0;

}




