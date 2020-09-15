#include<stdio.h>

int main()
{
	printf("Enter a character through keyboard:\n");
	char c;
	scanf("%c",&c);

	((c<48)||(c>57 && c<65)||(c>90 && c<97)||(c>122 && c<128)) ? printf("You entered a Special symbol\n") : printf("You have not entered a special symbol\n");
	return 0;

}