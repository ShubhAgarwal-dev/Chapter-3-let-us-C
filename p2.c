#include<stdio.h>
int main()
{
	printf("Enter Quantity and rate respectively");
	int q,r,y,dis;
	float t;
	scanf("%d %d",&q,&r);
	y=q*r;
	if(y<=9999)
		dis=0;
	if(y>=10000)
		dis=5.0;
	t=y*(100-dis)/100;
	printf("Final price is %f\n",t);
	return 0;
}
