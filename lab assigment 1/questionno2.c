#include<stdio.h>
#include<conio.h>
void main()
{
   int length,width,height,volume;
   printf("Enter number for length:");
   scanf("%d",&length);
   printf("Enter number for width:");
   scanf("%d",&width);
   printf("Enter number for height:");
   scanf("%d",&height);
   volume = length * width * height ;
   printf("The volume of the box is %d",volume);
   return 0;
	
	
}

