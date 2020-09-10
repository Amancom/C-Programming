#include<stdio.h>
#include<conio.h>
void main()
{
	float cent,fah;
	printf("Enter the temperature in celisus:");
	scanf("%f",&cent);
	
	 fah=(cent*1.8)+32;
	 printf("The conversion of celisun into fahrenheit of %.2f is %.2f.",cent,fah);
	 return 0;
	
}
