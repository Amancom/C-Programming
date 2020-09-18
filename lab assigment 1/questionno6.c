#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,sum,average;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	sum = a+b+c;
	average= sum/3;
	printf("\nThe average of three numbers is %d",average);
	return 0;
}
