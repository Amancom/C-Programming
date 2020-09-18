#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,total,per;
	printf("Enter your marks of Maths:");
	scanf("%f",&a);
	printf("Enter your marks of Network:");
	scanf("%f",&b);
	printf("Enter your marks of C:");
	scanf("%f",&c);
	printf("Enter your marks of Sociology:");
	scanf("%f",&d);
	printf("Enter your marks of Communication:");
	scanf("%f",&e);
	
	total=a+b+c+d+e;
	printf("The total marks obtained by student is %.2f.",total);
	
	per= total/500 * 100;
    printf("\nThe percentage obtained by student is %.2f percentage.",per);
	return 0;
	
	
	
	
}
