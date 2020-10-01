#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a<0)
{
	printf("%d is negative number",a);
	
}
else if(a>0)
{
	printf("%d is positive number",a);
}
else
{
	printf("%d is equal to zero",a);
}


return 0;
}

