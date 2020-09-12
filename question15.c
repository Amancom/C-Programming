#include<stdio.h>
#include<conio.h>
void main()
{
	int meter,cm;
	printf("Enter your number in meter:");
	scanf("%d",&meter);
	
	cm=meter*100;
	printf("The conversion of %dm in cm is %.2d cm.",meter,cm);
	return 0;
	
	
	
	
}
