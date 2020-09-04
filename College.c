#include<stdio.h>
# define PI =3.1416;
void main(){
	//Day 1
    //printf("Hello World");
	
	// Day 2
	// data and data types
	// integer
	/*
	int// data type
	num1 // identifiers 
	;// this together is called variable declaration
	num1=5;// varaiable initialization
	*/
	
	//	int num1=5; // in one step it is called variable declaration and initization
    //	printf("A number is %d",num1);
    // int num1=5,num2=10;
    // printf("The numbers are %d and %d",num2,num1);
     // if we want to change the value then change num2,num1
	// it comes two values if there is another like char or double it will not come.
	// it print num 1
	// ("") = conversion specifier
	
	//float num1 =5.5;
	//printf("A number is %.2f",num1); // .2 gives only two decimal values.
	
	//double num1=5.5;
	//printf("A number is %f",num1);
	
	//char num1='A';// should use '' in char comes with ASCII
	//printf("A number is %d",num1);//%c gives the output a and %d gives ascii number
    /*	
	int a;
	char b;
	float c;
	double d;
	printf("Storage size for int data type:%d\n",sizeof(a));
	printf("Storage size for char data type:%d\n",sizeof(b));
	printf("Storage size for float data type:%d\n",sizeof(c));
	printf("Storage size for double data type:%d\n",sizeof(d));
	 */	
	//comment=helps to make program readable or ignore 
	/* for multiple comment */
	
	// (imp)Types of C constant
	// int a=0xA;//0 is for octal it will ignore,0b for binary,if nothing is there then decimal and 0x for hexadecimal
	// printf("%d",a); //  for octal o and d for decimal
	
	// Backslash (Escape Sequences= non printing character because it it not seen in output)
	// imp=/n,\t= space between them horizontal space,"\"  \"" = to put double quote,
    //	printf("\"Hello NCCS\"");
	// printf("Hello Nepal");
	
	// Day 3
	
	//me 
	//int a=10;
	//int b=3;
	//int c=a+b;
	//printf("The numbers are %d.",c);
	
	//sir
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
