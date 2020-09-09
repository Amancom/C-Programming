// question 1
#include<stdio.h>
#include<conio.h>
#define PI 3.1416;
int main()
{
float radius;
float area,circum;
printf("Enter radius");
scanf("%f",&radius);
area=PI*radius*radius;
circum=2*PI*radius;
printf("The area of circle is %f",area);
printf("\nThe circumference of circle is %f",circum);
getch();

}
