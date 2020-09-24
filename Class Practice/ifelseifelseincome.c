#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter your income:");
	scanf("%d",&n);
	if(n<50000)
	{
		printf("Class C",n);
	}
	else if (n>=50000 && n<=300000)
	{
		printf("Class B",n);
	}
	else if (n>300000 && n<=1000000)
	{
		printf("Class A",n);
	}
	else 
	{
		printf("Class A+",n);
	}




return 0;
}

