#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s=0,a,i=1;
 printf("Enter three digit number:");
 scanf("%d",&n);
 
 a=i*i*i;
 s=s+a;
 i=i+1;
 a=i*i*i;
 s=s+a;
 i=i+1;
 a=i*i*i;
 s=s+a;
 i=i+1;
 printf("The cube of the number is %d.",s);


return 0;
}

