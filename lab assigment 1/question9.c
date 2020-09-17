#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0;
	printf("Enter three numbers:");
	scanf("%d",&n);
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	
	printf("The sum of three numbers is %d",sum);
	return 0;
	
	
	
	
	
	
}
