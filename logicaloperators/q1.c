#include<stdio.h>
int main()
{
/*I can't understand how to use logical operator here*/ 
puts("Enter Year:");
int a,b,c,d,e;
scanf("%d",&a);
b=a/1000;
c=a/100-b*10;
d=a/10-b*100-c*10;
e=a-b*1000-c*100-d*10;

if(((d==2)||(d==4)||(d==0)||(d==8)||(d==6))&&((e==0)||(e==4)||(e==8)))
puts("It's a leap year");

else if(((d==1)||(d==3)||(d==5)||(d==7)||(d==9))&&((e==2)||(e==6)))
puts("Is's a leap year");

else
puts("It's not a leap year");

return 0;
}
