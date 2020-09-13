#include<stdio.h>

int main(){
	float t;
	printf("Enter time taken by worker to complete his work:");
	scanf("%f",&t);

	if(t>=2 && t<=3)
		printf("Very Efficient worker\n");
	if(t>3 && t<=4)
		printf("Need some improvement\n");
	if(t>4 && t<=5)
		puts("Need training to improve his speed");
	if(t>5)
		puts("The worker is terminated");
	return 0;
}
