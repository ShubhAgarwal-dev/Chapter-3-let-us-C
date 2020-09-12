#include<stdio.h>
int main()
{
float a,b,c;
puts("Enter Hardness,Carbon Content & Tensil strength of steel");
scanf("%f %f %f",&a,&b,&c);
int r;
if(a>=50 && b<=0.7 && c>=5600)
r=10;

else if(a>=50 && b<=0.7 && c<5600)
r=9;

else if(a<50 && b<=0.7 && c>=5600)
r=8;

else if(a>=50 && b>0.7 && c>=5600)
r=7;

else if((a>=50 && b>0.7 && c<5600)||(a<50 && b<=0.7 && c<=5600)||(a<50 && b>0.7 && c>=5600))
r=6;

else
r=5;

printf("The grade of steel is %d\n",r);
return 0;
}
