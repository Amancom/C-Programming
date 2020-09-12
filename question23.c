#include<stdio.h>
#include<conio.h>
void main()
{
	
	int salary,tax,all,net;
	printf("Enter your basic salary:");
	scanf("%d",&salary);
	
	tax=0.2*salary;
	printf("The tax amount of salary is %d",tax);
    
    all=0.4*salary;
    printf("\nThe allowance amount of salary is %d",all);
    
    net=salary-tax-all;
    printf("\nThe net salary is %d",net);
    
    return 0;
	
	
}
