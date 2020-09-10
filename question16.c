#include<stdio.h>
#include<conio.h>
void main()
{
	float hrs,min,sec;
	printf("Enter your time in hours:");
	scanf("%f",&hrs);
	
	min=hrs*60;
	printf("The conversion of hours into minute is %.2f min.",min);
	
	sec=min*60;
	printf("\nThe conversion of minute into sec is %.2f min.",sec);
	
	return 0;
	
	
}
