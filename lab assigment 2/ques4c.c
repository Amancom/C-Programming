#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,max,min;
 printf("Enter three numbers:\n");
 scanf("%d %d %d",&a,&b,&c);
 
 max=(a>b)?
       (a>c)?
       a
	   :
	   c
	   :
	   (b>c)?
	   b
	   :
	   c;	
	   min=(a<b)?
       (a<c)?
       a
	   :
	   c
	   :
	   (b<c)?
	   b
	   :
	   c;	
printf("The maximun number is %d.",max);
printf("\nThe minimum number is %d.",min);
return 0;
}

