#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,b,c,tax;
	printf("Enter the amount:Rs ");
	scanf("%d",&amt);
	b=0.05*amt;
	printf("The amount of tax is:Rs %d",b);
	c=amt+b;
	printf("\nThe total amount is:Rs %d",c);
	return 0;
}
