#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter your electricity bill.");
scanf("%d",&a);
if (a>=0 && a<=150)
{
	printf("Your electricity bill is %d",a*3);
}
else if (a>=151 && a<=350)
{
	printf("Your electricity bill is %d",100+a*3.75)
}



return 0;
}

