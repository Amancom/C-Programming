#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,small;
  printf("Enter four numbers:\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  small=(a<b&&a<c&&a<d)?(a):((b<c&&b<d)?(b):(c<d)?(c):(d));
  printf("The smallest among %d,%d,%d,%d is %d.",a,b,c,d,small);



return 0;
}

