#include<stdio.h>
#include <stdlib.h>// rand is present
#include <time.h>// to generate different numbers
//rand is used to generate random numbers
// in order to see the rand srand is used
void main()
{
	/*
	int x,r;
	
	srand(time(NULL));
	
	x=10;
	while(x>0)
	{
		r=rand();
		printf("%d\n",r);
		x --;
		
	}
	*/
	/*
 int a,b;
 a=7;
 while(a<30)
 {
 	b=a%7;
 	printf("%d%%7=%d\n",a,b);
 	a++;
 }
	*/
	int x,r;
	
	srand(time(NULL));
	x=10;
	while(x>0)
	{
		r=rand();
		printf("%d\n",r%100);
	//	printf("%2d\n",r%100); it will provide two digit output
        x--;	
	}
     return 0;
}

