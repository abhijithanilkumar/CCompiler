#include<stdio.h>
/* This is a multi
/*this is not a comment*/
line comment*/ 
int main() {
   int amount, rate, time, si;
   //This is a single line comment
   printf("\nEnter Principal Amount : ");
   scanf("%d", &amount);
 
   printf("\nEnter Rate of Interest : ");
   scanf("%d", &rate);
 
   printf("\nEnter Period of Time   : ");
   scanf("%d", &time);
   scanf("",); 
   si = (amount * rate * time) / 100;
   printf("\nSimple Interest : %d", si);
   printf("",); 
   return(0);
}
}
"I am a
