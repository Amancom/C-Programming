#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,s1,s2,s;
 printf("Enter four numbers:\n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 s1=(a<b)?a:b;
 s2=(c<d)?c:d;
 s=(s1<s2)?s1:s2;
 printf("The smallest one is %d",s);


return 0;
}

