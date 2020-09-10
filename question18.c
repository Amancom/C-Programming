#include<stdio.h>
#include<conio.h>
void main()
{
	float a,square,cube;
	printf("Enter a number:");
	scanf("%f",&a);
	
	square=a*a;
	printf("The square of the number is:%.2f",square);
	
	cube=square*a;
	printf("\nThe cube of the number is:%.2f",cube);
	
	return 0;
	
}
