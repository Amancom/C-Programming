#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter your annual income:");
	scanf("%d",&n);
	if(n<50000)
	{
		printf("Class C");
	}
	else if(n>=50000&&n<=300000)
	{
		printf("Class B");
	}
	else if(n>=300000&&n<=1000000)
	{
		printf("Class A");
	}
	else
	{
		printf("Class A+");
	}




return 0;
}

