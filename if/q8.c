#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  printf("Enter two numbers whose absolute you want to know:");
  scanf("%d %d",&a,&b);
  a=abs(a);
  b=abs(b);
  printf("absolute value of your first integer is %d\n",a);
  printf("absolute value of your second integer is %d\n",b);
  return 0;
}
