#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,diff,sum;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	
	diff=(a>b)?(b):(b-a);
	printf("The difference is %d",diff);
	sum=(a<b)?(b):(b+a);
	printf("\nThe sum is %d",sum);




return 0;
}

