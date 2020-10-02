#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
(a>b)?printf("Difference of %d and %d = %d",a,b,a-b):printf("Sum of %d and %d = %d",a,b,a+b);



return 0;
}

