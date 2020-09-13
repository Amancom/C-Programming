#include<stdio.h>
#include<conio.h>
void main()
{
	float rupees,dollar;
	printf("Enter your curreny in:Rs");
	scanf("%f",&rupees);
	
	dollar=rupees*0.0085;
	printf("The conversion of Rs %0.1f into Dollar is:$%.2f",rupees,dollar);
	return 0;
	
}
