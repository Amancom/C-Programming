#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("***** Welcome to THE NOTORIOUS Canteen *******");
printf("\n****** MENU *******");
printf("\n1. Momo");
printf("\n2. Pizza");
printf("\n3. Noodles");
printf("\n4. Burger");
printf("\n5. Fry Rice");
printf("\nPlease enter the number:");
scanf("%d",&n);
switch(n)
{
	case 1: printf("Its Momo.");
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
	default:printf("Please enter the number below 7.Thank You!!");
	break;
}



return 0;
}

