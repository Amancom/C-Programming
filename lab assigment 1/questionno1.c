#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,area,circum,pi=3.1416;
	printf("Enter number for radius:");
	scanf("%f",&radius);
	
	area = pi * radius *radius;
	printf("The area of the circle is %.2f\n",area);
	
	circum = 2 * pi * radius;
	printf("The circum of the circle is %.2f",circum);
	
	return 0;
}
