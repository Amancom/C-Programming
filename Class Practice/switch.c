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
		case 2: printf("Its Pizza.");
	break;
		case 3: printf("Its Noodles.");
	break;
		case 4: printf("Its Burger.");
	break;
		case 5: printf("Its FryRice.");
	break;
		case 6: printf("Its Exit.");
	break;
	default:printf("Enter the number below 7. Thank You!!");
	break;
}



return 0;
}

