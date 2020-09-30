#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,g;
printf("Enter three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{ 
   //printf("\n%d is greatest.",a);
   g=a;
}
else if(b>a && b>c)
{
	//printf("\n%d is greatest",b);
	g=b;
}
else
{
	//printf("\n%d is greatest.",c);
	g=c;
}
	printf("\n%d is greatest.",g);
return 0;
}

