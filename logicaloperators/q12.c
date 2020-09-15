//BMI  calculator
#include<stdio.h>

int main()
{
	float o,p,w,h,b;
	printf("Enter your weight and height please:");
	scanf("%f %F",&w,&h);
	o=w*0.01;
	p=h*0.1;
	b=w/(h*h);
	if (b<=15)
		printf("Your BMI category is STARVATION\n");
	
	else if (b>15 && b<=17.5)
		printf("Your BMI category is ANOREXIC	\n");
	
	else if (b>17.5 && b<= 18.5)
		printf("Your BMI category is UnderWeight\n");

	else if (b>18.5 && b<25)
		printf("Your BMI category is Ideal\n");

	else if (b>=25 && b<26)
		printf("Your BMI category is OverWeight\n");

	else if (b>26 && b<31)
		printf("Your BMI category is OBESE\n");

	else
		printf("Your BMI category is Morbidly OBESE\n");

  if (b<15)
		printf("Your BMI category is STARVATION\n");

	return 0;

}
