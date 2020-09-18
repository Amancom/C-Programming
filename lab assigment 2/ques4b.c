#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,gre;
 printf("Enter two numbers:\n");
 scanf("%d %d",&a,&b);
 gre = (a>b)? (a):(b);
 printf("The Greatest among %d and %d is %d.\n",a,b,gre);

return 0;
}

