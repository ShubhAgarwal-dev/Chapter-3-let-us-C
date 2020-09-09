#include<stdio.h>
int main()
{
	printf("enter cost price and selling price of item respectively:");
	int c,s,p,l;
	scanf("%d %d",&c,&s);
	if(c>s)
	{
		l=c-s;
		printf("You made loss of rupees %d\n",l);
	}
	else if(c<s)
	{
		p=s-c;
		printf("You made profit of rupees %d\n",p);
	}
	else
		printf("You made no profit or loss\n");
	return 0;
}
