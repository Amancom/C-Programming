#include<stdio.h>
#include<conio.h>
void main()
{
  int n,rem,rev=0;
  printf("Enter five digit number:");
  scanf("%d",&n);
  
  rem=n%10;//5
  rev=rev*10 + rem;//5
  n=n/10;//1234
  rem=n%10;//4
  rev=rev*10 + rem;//54
  n=n/10;//123
  rem=n%10;//3
  rev=rev*10 + rem;//543
  n=n/10;//12
  rem=n%10;//2
  rev=rev*10 + rem;//5432
  n=n/10;//1
  rem=n%10;//1
  rev=rev*10 + rem;//54321
  n=n/10;//0
  printf("The reverse of 5 digit number is %d.",rev);


return 0;
}

