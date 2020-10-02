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
	switch(ch)
	{
		case '+':
		printf("Addition= %d",a+b);
		break;
		case '-':
		printf("Substraction= %d",a-b);
		break;
		case '*':
		printf("Multiplication= %d",a*b);
		break;
		case '/':
		printf("Divison= %d",a/b);
		break;
		default:
		printf("Please use only +,-,* and /.");
	}


return 0;
}

