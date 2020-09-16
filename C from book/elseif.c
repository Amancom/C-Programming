#include<stdio.h>
#include<conio.h>
//When three or more conditions are present, we can evaluate them using an else if structure. 
void main()
{
int a;
 printf("Type an integer:");
 scanf("%d", &a);
 printf("You typed %d.\n",a);
if(a > 10)
 {
printf("%d is greater than 10.\n",a);
 }
 else if(a < 10)
{
 printf("%d is less than or equal to 10.\n",a);
 }
 else
 {
 printf("%d is 10.\n",a);
 }

return 0;
}

