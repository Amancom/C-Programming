#include<stdio.h>
#include<conio.h>
void main()
{
	float centigrade,fah;
	printf("Enter the temperature in centigrade:");
	scanf("%f",&centigrade);
	
	 fah=(centigrade*1.8)+32;
	 printf("The conversion of centigrade into fahrenheit is %.2f.",fah);
	 return 0;
	
}
