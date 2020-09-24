#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number from 30 to 60:");
	scanf("%d",&n);
	printf("Even numbers are:");
	while(n>=30&&n<=60)
	{
		printf("\n%d",n);
		n=n+2;
	}




return 0;
}

