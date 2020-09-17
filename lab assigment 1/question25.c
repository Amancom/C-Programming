#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,total,per;
	printf("Enter your marks of Maths:");
	scanf("%d",&a);
	printf("Enter your marks of Network:");
	scanf("%d",&b);
	printf("Enter your marks of C:");
	scanf("%d",&c);
	printf("Enter your marks of Sociology:");
	scanf("%d",&d);
	printf("Enter your marks of Communication:");
	scanf("%d",&e);
	
	total=a+b+c+d+e;
	printf("The total marks obtained by student is %d.",total);
	
	per=(total/500)*100;
    printf("\nThe percentage obtained by student is %d percentage.",per);
	return 0;
	
	
	
	
}
