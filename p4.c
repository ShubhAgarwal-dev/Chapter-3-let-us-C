#include<stdio.h>

int main()
{
	char gen,qlf;
	int yos,s;
	printf("Enter Gender,Years of service,salary respectively\n");
	printf("M for male and F for female\n");
	printf("then enter ur salary\n");
	printf("G for graduate and P for post-graduate\n");
	scanf("%c %d %c",&gen,&yos,&qlf);

	if(gen=='M')
	{
		if(qlf=='P'&&yos>=10)
		      s=15000;	
		if((qlf=='P'&&yos<10) || (qlf=='G'&&yos>=10))
			s=10000;
		if(qlf=='G'&&yos<10)
			s=7000;
	}
	if(gen=='F')
	{
		if(qlf=='P'&&yos>=10)
			s=12000;
		if(qlf=='P'&&yos<10)
			s=10000;
		if(qlf=='G'&&yos>=10)
			s=9000;
		if(qlf=='G'&&yos<10)
			s=7000;
	}
	printf("Your salary is %d\n",s);
	return 0;
}
