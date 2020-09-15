#include<stdio.h>
int main()
{
	//RBJ color code conversion program
	int r,b,g;
	float w,c,y,m,k;
	printf("Enter R , B & G color code:");
	scanf("%d%d%d",&r,&b,&g);

	if(r>=b && r>=g)
		w = r/255.0;
	if(b>=r && b>=g)
		w = b/255.0;
	if(g>=r && g>=b)
		w = g/255.0;
	if (r==b==g)
		w = r/255.0;
	{
		/* code */
	}

	k = 1 - w;
	c = (w - r/255.0)/w;
	m = (w - g/255.0)/w;
	y = (w - b/255.0)/w;

	printf("CYMK color code is c=%f,Y=%f,M=%f&K=%f \n",c,y,m,k);

	return 0; 
}