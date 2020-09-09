#include<stdio.h>
int main()
{
	int a,r;

	printf("Input an integer:");
	scanf("%d",&a);

	r=a%2;

	if(r==0)
		printf("You entered an even  number\n");
	else
		printf("You entered an odd number\n");
	return 0;
}
