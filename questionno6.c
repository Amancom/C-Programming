#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,sum,average;
	printf("Enter 1st number:");
	scanf("%f",&a);
	printf("Enter 2nd number:");
	scanf("%f",&b);
	printf("Enter 3rd number:");
	scanf("%f",&c);
	sum = a+b+c;
	printf("The sum of three numbers is %.3f",sum);
	average= sum/3;
	printf("\nThe average of three numbers is %.3f",average);
	return 0;
}
