#include<stdio.h>
#include<conio.h>
void main()
{
	float weight,kg;
	printf("Current weight in gram:");
    scanf("%f",&weight);
    
    
    printf("The current weight in gram is %.3f gram.",weight);
     
    kg= weight*0.001;
    printf("\nThe current weight in kg is %.3f kg.",kg);
    
   
    return 0;
	
	
	
	
	
}
