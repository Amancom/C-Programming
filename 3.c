#include<stdio.h>
void main(){
	// Day 3
	//me 
	//int a=10;
	//int b=3;
	//int c=a+b;
	//printf("The numbers are %d.",c);
	
	//sir
	// ** question
    // 1) Write a program that accepts two numbers and calculates their additon,substraction,
    // multiplication,division and modulus. And display all the result on screen.
	// it should be user friendly output must be clear so that user can understand it.
	// like this is user friendly
	
	// input provide by ourself
    /*	int num1=10,num2=3,result;
	 float div; // for divison as it requires division
	 result=num1+num2;
	 printf("The sum of %d and %d is %d.",num1,num2,result);
	
    	result = num1-num2;
	 printf("\nThe difference of %d and %d is %d.",num1,num2,result);
	
    result = num1*num2;
	 printf("\nThe multiplication of %d and %d is %d",num1,num2,result);
	
	 result=num1%num2;
	 printf("\nThe modulus of %d and %d is %d.",num1,num2,result);
	
    // typecasting = changing of one data type into other type. there are two types
    // implict-internal=change known by the computer.
    // explicit-external= change known by the user.
    
     div=(float)num1/num2;
	 printf("\nThe division of %d and %d is %f.",num1,num2,div);
	*/

	
	// input provided by user
	
	int num1,num2,result;
	float div;
	printf("Enter your first numbers=");
	scanf("%d",&num1);
	printf("Enter your second numbers=");
	scanf("%d",&num2);
	
	result=num1+num2;
	printf("The sum of %d and %d is %d",num1,num2,result);
	
	result=num1-num2;
	printf("\nThe difference of %d and %d is %d",num1,num2,result);
	
	result=num1*num2;
	printf("\nThe multiplication of %d and %d is %d",num1,num2,result);
	
	result=num1%num2;
	printf("\nThe modulus of %d and %d is %d",num1,num2,result);

    div=(float)num1/num2; // (float) is requried because it will provide the value in decimal
    printf("\nThe division of %d and %d is %f",num1,num2,div);

    return 0; // it will end or terminate the program
    getch(); //to hold the screen
	//scanf("%d",&num1); // & for address
	
}
	
	
