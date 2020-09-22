#include<stdio.h>
#include<conio.h>
void main(){
float a,b,c,d,e,f,g,tot,per;
printf("Enter your marks in Maths:");
scanf("%f",&a);
printf("Enter your marks in English:");
scanf("%f",&b);
printf("Enter your marks in Nepali:");
scanf("%f",&c);
printf("Enter your marks in Social:");
scanf("%f",&d);
printf("Enter your marks in English:");
scanf("%f",&e);
printf("Enter your marks in Science:");
scanf("%f",&f);
printf("Enter your marks in Account:");
scanf("%f",&g);
tot=a+b+c+d+e+f+g;
per=(tot*100)/700;
printf("\nThe Total marks is %.0f and Percentage is %.2f%%.",tot,per);
if(per>=80)
{
	printf("\n%.2f%% is distinction.",per);
}
else if(per>=60&&per<=70)
{
	printf("\n%.2f%% is first division",per);
}
else if(per>=45&&per<=59)
{
	printf("\n%.2f%% is second division",per);
}
else if(per>=32&&per<=44)
{
	printf("\n%.2f%% is third division",per);
}
else if(per<=32)
{
	printf("\n%.2f%% is fail",per);
}
return 0;
}


