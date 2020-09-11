#include<stdio.h>
#include<conio.h>
void main()
{
	int hrs,min,sec;
	printf("Enter your time in hours:");
	scanf("%d",&hrs);
	
	min=hrs*60;
	printf("The conversion of hours into minute is %.2d min.",min);
	
	sec=min*60;
	printf("\nThe conversion of minute into sec is %.2d sec.",sec);
	
	return 0;
	
	
}
