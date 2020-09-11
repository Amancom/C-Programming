#include<stdio.h>
#include<conio.h>
void main()
{
	float indian,nepali;
	printf("Enter the amount in:Rs");
	scanf("%f",&indian);
	
	nepali=indian*1.60;
	printf("The total amount of %.1f in Nepali Currency is %.2f.",indian,nepali);
	return 0;
}



