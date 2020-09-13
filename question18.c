#include<stdio.h>
#include<conio.h>
void main()
{
	float a,square,cube;
	printf("Enter a number:");
	scanf("%f",&a);
	
	square=a*a;
	printf("The square of %.1f is:%.1f.",a,square);
	
	cube=square*a;
	printf("\nThe cube of %.1f is:%.1f.",a,cube);
	
	return 0;
	
}
