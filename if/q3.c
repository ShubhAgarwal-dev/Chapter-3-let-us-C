#include<stdio.h>

int main()
{
	printf("Year:");
	int y,r;
	scanf("%d",&y);
	r=y%4;
	if(r==0)
		printf("You entered leap year\n");
	else
		printf("It's not a leap year\n");
	return 0;
}
