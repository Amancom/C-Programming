#include<stdio.h>
#include<conio.h>
/*
switch/else is used for complex suitations which is another decison
making tool in c.
break means end or termination
*/
void main()
{
/*
char a;
printf("Your choice(1,2,3):");
scanf("%c",&a);

switch(a)
{
	case '1':
	 puts("Excellent number");
	 break;
	 case '2':
	 puts("Good number");
	 break;
	 case '3':
	 puts("Common number");
	 break;
     
	 default:
	 puts("Invalid number");	 
	 
}*/
// puts is also like printf
 char a;

 puts("Vacation options: ");
 puts("A – Airfare");
 puts("B – Hotel");
 puts("C – Rental Car");
 scanf("%c", &a);

 switch(a)
 {
 case 'A':
 	case 'a':
 puts("You have selected the airfare");
 break;
case 'B':
	case 'b':
 puts("You have selected Hotel");
 break;
 case 'C':
 	case 'c':
 puts("You have selected Rental Car");
 break;
 default:
 puts("That is an invalid choice");
 }






return 0;
}

