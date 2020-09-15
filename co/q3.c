#include "stdio.h"
int main(){
	int y;
	printf("Enter year through keyboard:");
	scanf("%d",&y);

	(y%4==0)?printf("It's a leap year\n") : puts("It's not a leap  year");
	return 0;
}