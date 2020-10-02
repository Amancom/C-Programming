#include<stdio.h>
#include<conio.h>
void main()
{
float sal,tax,tot;
printf("Enter your salary:");
scanf("%f",&sal);
if(sal<=400000)
{
	tax=sal*0.01;
printf("The total salary is %.2f",tot=sal+tax);
}
else if(sal>400000 && sal<=500000)
{
	tax=sal*0.1;
	printf("The total salary is %.2f",tot=sal+tax);

}
else
{
	tax=sal*0.2;
	printf("The total salary is %.2f",tot=sal+tax);

}
return 0;
}

