#include<stdio.h>
#include<conio.h>
void main()
{
	float rupees,dollar;
	printf("Enter your curreny in:Rs");
	scanf("%f",&rupees);
	
	dollar=rupees*0.0085;
	printf("The total curreny is:$%.2f",dollar);
	return 0;
	
}
