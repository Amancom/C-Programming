#include<stdio.h>
#include<conio.h>
void main()
{
 char a,lower,upper;
 printf("Enter your desired character in lowercase:");
 scanf("%c",&a);
 
 upper=a-32;
 printf("The uppercase of %c is %c.",a,upper);
 lower=upper+32;
 printf("\nThe lowercase of %c is %c.",upper,lower);



return 0;
}

