#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,diff,sum;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	diff=(a>b)?(a):(a-b);
	printf("The difference is %d",diff);
	sum=(b>a)?(b):(a+b);
	printf("\nThe sum is %d",sum);
return 0;
}

