#include<stdio.h>
#include<conio.h>
void main()
{
	float indian,nepali;
	printf("Enter the amount indian currency:");
	scanf("%f",&indian);
	
	nepali=indian*1.60;
	printf("The total amount of %.1f in Nepali Currency is Rs %.2f.",indian,nepali);
	return 0;
}



