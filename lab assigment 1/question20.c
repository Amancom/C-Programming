#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("Enter number for a:");
	scanf("%f",&a);
	printf("Enter number for b:");
	scanf("%f",&b);
	printf("Enter number for c:");
	scanf("%f",&c);
	
	s=(a+b+c)/2;
	printf("The sides of a triangle is %.2f",s);
	
	s=s*(s-a)*(s-b)*(s-c);
	area=sqrt(s);
	printf("\nThe area of a traingle is %.2f",area);
    return 0;	
	
	
	
}
