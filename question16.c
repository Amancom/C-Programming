#include<stdio.h>
#include<conio.h>
void main()
{
	int hrs,min,sec;
	printf("Enter your time in hours:");
	scanf("%d",&hrs);
	
	min=hrs*60;
	printf("The conversion of %d hours into minute is %.2d min.",hrs,min);
	
	sec=min*60;
	printf("\nThe conversion of %d minute into sec is %.2d sec.",min,sec);
	
	return 0;
	
	
}
