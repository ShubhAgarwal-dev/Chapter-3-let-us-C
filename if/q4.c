#include<stdio.h>
int main()
{
	/* calculating first day of year */
	printf("Enter year:");
	int y,e,f,u,d;
	scanf("%d",&y);

	if(y>=2001)
	{
		d=y-2001;
		e=d/4;
		f=(d+e)%7;
	}

	if(y<2001)
	{
		d=2001-y;
		e=(d+3)/4;
		f=7-(d+e)%7;
	}

		if(f==0)
			printf("It's Monday on First Jan of %d\n",y);
		if(f==1)
                        printf("It's Tuesday on First Jan of %d\n",y);
		if(f==2)
                        printf("It's Wednesday on First Jan of %d\n",y);
		if(f==3)
                        printf("It's Thursday on First Jan of %d\n",y);
		if(f==4)
                        printf("It's Friday on First Jan of %d\n",y);
		if(f==5)
                        printf("It's Saturday on First Jan of %d\n",y);
		if(f==6)
                        printf("It's Sunday on First Jan of %d\n",y);
	
	
	return 0;
}
