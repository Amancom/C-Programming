#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter any digit,alphabet or special character:");
scanf("%c",&ch);
if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
{
	printf("Its alphabet.",ch);
}
else if(ch>='0'&& ch<='9')
{
	printf("Its digit.",ch);
}
else
{
	printf("Its special character.",ch);
}
return 0;
}

