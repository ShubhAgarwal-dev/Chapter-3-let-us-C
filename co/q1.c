#include<stdio.h>

int main()
{
	printf("Enter a character through keyboard:\n");
	char c;
	scanf("%c",&c);

	(c>=97 && c<=122) ? printf("You entered a lower case alphabet\n") : printf("You have not entered a small case alphabet\n");
	return 0;

}