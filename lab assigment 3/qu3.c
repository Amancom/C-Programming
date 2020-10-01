#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter character\n:");
scanf("%c",&ch);
if(ch =='a' || ch =='e' ||ch =='i' ||ch =='o' ||ch =='u')
{
	printf("\nCharacter is vowel.");
}
else
{
	printf("\nCharacter is not vowel.");
}



return 0;
}

