#include<stdio.h>
#include<conio.h>
void main()
{
	float dollar,rupees;
	printf("Enter the amount in:$");
	scanf("%f",&dollar);
	
	rupees = dollar*117.70;
	printf("The Nepalese Rupees of $%.1f is Rs %.2f.",dollar,rupees);
	return 0;
	
	

}
