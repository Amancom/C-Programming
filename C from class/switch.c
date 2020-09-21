#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
switch(n)
{
	case 1: printf("Its momo");
	break;
	case 2: printf("Its pizza");
	break;
	case 3: printf("Its noodles");
	break;
	case 4: printf("Its burger");
	break;
	case 5: printf("Its fry rice");
	break;
	case 6: printf("Its exit");
	break;
	default: printf("Enter the numbers below 7");
	break;
	
}



return 0;
}

