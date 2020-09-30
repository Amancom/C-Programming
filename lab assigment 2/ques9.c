#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s;
printf("Enter three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
{
	//printf("%d is smallest.",a);
	s=a;
}
else if(b<a && b<c)
{
	//printf("%d is smallest.",b);
	s=b;
}
else
{
	//printf("%d is smallest",c);
	s=c;
}
printf("%d is smallest.",s);



return 0;
}

