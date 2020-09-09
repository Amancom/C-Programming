#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,tax;
	printf("Enter the amount:Rs");
	scanf("%d",&amt);
	printf("The amount of tax is:Rs %.3f",0.05*amt);
	printf("\nThe total amount is:Rs %.3f",amt + (0.05*amt));
	return 0;
}
