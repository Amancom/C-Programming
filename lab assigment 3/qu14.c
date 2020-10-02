#include<stdio.h>
#include<conio.h>
void main()
{
char n;
printf("Enter a charcter to know vowel letter:");
scanf("%c",&n);
switch(n)
{
	case 'a':
	case 'A':
	case 'e':
	case 'E':		
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	printf("Its vowel.");
	break;
	default:
	printf("Its constant.");
}


return 0;
}

