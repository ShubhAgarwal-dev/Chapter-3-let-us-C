#include<stdio.h>

int main(){
	float a,b,c;
	printf("Enter three numbers through keyboard:");
	scanf("%f %f %f",&a,&b,&c);

	// to calculate max number among three

	(a>=b && a>=c)?printf("%f is the maximum number\n",a):printf(" ");
	(b>=a && b>=c)?printf("%f is the maximum number\n",b):printf(" ");
	(c>=b && c>=a)?printf("%f is the maximum number\n",c):printf(" ");
	
	return 0;
}