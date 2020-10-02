#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int a,b;
	printf("Enter an operator:");
	scanf("%c",&ch);
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(ch=='+')
	{
		printf("Addition=%d",a+b);
	}
	else if(ch=='-')
	{
		printf("Substraction=%d",a-b);
	}
	else if(ch=='*')
	{
		printf("Multiplication=%d",a*b);	
	}
	else
	{
		printf("Division=%d",a/b);
	}
return 0;
}

