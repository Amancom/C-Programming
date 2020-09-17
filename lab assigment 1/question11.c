#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter number for a:");
	scanf("%d",&a);
	printf("Enter number for b:");
	scanf("%d",&b);
	printf("\nValues before swapping is a=%d b=%d.",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nValues after swapping is a=%d b=%d.",a,b);
	getch();
	
	
	
	
	
}

