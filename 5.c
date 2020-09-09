#include<stdio.h>
#include<conio.h>
// question 2
void main()
{
	int length,breadth,height,volume;
	printf("Enter the length of the box:\n");
	scanf("%d",&length);
	printf("Enter the breath of the box:\n");
	scanf("%d",&breadth);
	printf("Enter the height of the box:\n");
	scanf("%d",&height);
	volume = length*breadth*height;
	printf("\nThe volume is %d",volume);
	getch();
	
	
}
