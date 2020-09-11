#include<stdio.h>
int main()
{
float x,y;
printf("Enter co-ordinates of a point:");
scanf("%f %f",&x,&y);
if(x==0 && y!=0)
printf("Point lie on Y-axis\n");
else if(y==0 && x!=0)
printf("Point lie on X-axis\n");
else if(x==0&&y==0)
printf("Your point lie on origin\n");
else
printf("Your point is not on a very special position\n");
return 0;
}
