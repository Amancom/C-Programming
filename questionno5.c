#include<stdio.h>
#include<conio.h>
void main()
{
	float dollar,rupees;
	printf("Enter a number in:$");
	scanf("%f",&dollar);
	
	rupees = dollar*117.70;
	printf("The Nepalese Rupees of $%.1f is %.2f",dollar,rupees);
	return 0;
	
	

}
