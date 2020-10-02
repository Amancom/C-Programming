#include<stdio.h>
#include<conio.h>
void main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n<0)
{
	printf("%d is negative.",n);
}
else
{
	printf("%d is not negative.",n);
}
return 0;
}


