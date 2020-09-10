#include<stdio.h>
#include<conio.h>
void main()
{
	float weight,kg;
	printf("Current weight in gram:");
    scanf("%f",&weight);
    
    
    printf("The current weight in gram is %.0f gram.",weight);
     
    kg= weight*0.001;
    printf("\nThe current weight in kg is %.0f kg.",kg);
    
   
    return 0;
	
	
	
	
	
}
