#include<stdio.h>
#include<conio.h>
void main()
{
//int a;
float unit,charges;
//printf("Enter your electricity bill:");
//scanf("%d",&a);
printf("Enter no of units consumed:");
scanf("%f",&unit);
if(unit>=0 && unit<=150)
{
	charges=3*unit;
}
else if(unit>=151 && unit<=350)
{
	charges=100+(unit-150)*3.75;
}
else if(unit>=351 && unit<=450)
{
	charges=250+(unit-350)*4;
}
else
{
  charges=300+(unit-450)*4.25;
}
printf("Amount to be paid is %f",charges);
return 0;
}

