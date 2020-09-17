#include<stdio.h>
#include<conio.h>
void main()
{
	int mark,dis,sp;
	printf("Enter the mark price of the Radio:Rs");
	scanf("%d",&mark);
	
	dis=0.3*mark;
	printf("The Discount amount for %d is Rs%d.",mark,dis);
	
	sp=mark-dis;
	printf("\nThe Selling Price of Radio after dis is Rs%d.",sp);
	
	return 0;
	
	
	
	
	
	
}
