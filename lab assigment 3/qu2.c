#include<stdio.h>
#include<conio.h>
void main()
{
	char low,upp;
	printf("Enter any character:");
	scanf("%c",&upp);
	if(upp>=65 && upp<=90)
	{
		low=upp+32;
		printf("Lower=%c",upp,low);
	}
	else
	{
		upp=upp-32;
		printf("Upper=%c",low,upp);
	}


return 0;
}


