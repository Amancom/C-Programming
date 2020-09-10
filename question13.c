#include<stdio.h>
#include<conio.h>
#define Pi 3.1416
void main()
{
	float a,degree;
	printf("Enter the number:");
	scanf("%f",&a);
	degree = a*(Pi/180);
	printf("The given number in Degree is %.2f",degree);
	
	printf("\nThe value for sin(%.1f) =%.2f",a,sin(degree));
	printf("\nThe value for cos(%.1f) =%.2f",a,cos(degree));
	printf("\nThe value fortan(%.1f) =%.2f",a,tan(degree));
	
	
	
}
