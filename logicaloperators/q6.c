/* Program To find TYPE of triangle*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	printf("Enter the sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);

	if(a+b>c && a+c>b && c+b>a){

	if(a==b==c)
		printf("It's an  equilateral triangle\n");

	if((a==b && a!=c)||(b==c && b!=a)||(c==a && c!=b))
	       printf("It's an isosceles triangle\n");

	int q,w,e;
	q=pow(a,2);
	w=pow(b,2);
	e=pow(c,2);

	if((q+w==e)||(q+e==w)||(w+e==q))
		printf("It's a Right Angle Triangle\n");

	if(a!=b && b!=c && c!=a)
		puts("It's a scalene triangle");
	}

	else
		printf("It's not a valid trinagle\n");

	return 0;
}
