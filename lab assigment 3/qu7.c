#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e,total,per;
printf("Enter your marks in C:");
scanf("%d",&a);
printf("Enter your marks in Maths:");
scanf("%d",&b);
printf("Enter your marks in BC:");
scanf("%d",&c);
printf("Enter your marks in Sociology:");
scanf("%d",&d);
printf("Enter your marks in English:");
scanf("%d",&e);
total=a+b+c+d+e;
per=total*100/500;
if(per>=80 && per<=100)
{
	printf("\n%d%% is A",per);
}
else if(per>=60 && per<=79)
{
	printf("\n%d%% is B",per);
}
else if(per>=50 && per<=59)
{
	printf("\n%d%% is C",per);
}
else if(per>=40 && per<=49)
{
	printf("\n%d%% is D",per);
}
else
{
	printf("\n%d%% is F",per);
}
return 0;
}


