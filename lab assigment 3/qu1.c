#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 printf("Enter your age:");
 scanf("%d",&a);
 if(a<=18)
 {
 	printf("You are not eligible to vote.");
 }
else
{
	printf("You are eligible to vote.");
}


return 0;
}

