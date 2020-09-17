#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,sum,sub,mult,modulus;
  float div;
  
  printf("Enter your first number:");
  scanf("%d",&a);
  printf("Enter your second number:");
  scanf("%d",&b);
  sum = a+b ;
  printf("The sum of the numbers is %d",sum);
  
  sub = a-b;
  printf("\nThe substraction of the numbers is %d",sub);
  
  mult = a*b;
  printf("\nThe multiplicaton of the numbers is %d",mult);
    
  modulus = a%b;
  printf("\nThe modulus of the numbers is %d", modulus);
    
  div =(float)a/b;
  printf("\nThe division of the numbers is %f",div);
  
  
  return 0;
  
  
  
	
}

