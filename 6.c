//question 3
#include<stdio.h>
#include<conio.h>
void main()
{
	 int amt,tax;
	 printf("Enter the amount:");
	 scanf("%d",&amt);
	 tax=0.05*amt;
	 printf("Tax Amount :Rs% .2f",tax);
	 printf("\nTotal Amount : Rs%.2f",tax-amt+amt);
	 getch();
	 return 0;	
}
