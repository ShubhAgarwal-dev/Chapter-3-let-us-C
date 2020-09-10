#include<stdio.h>
int main()
{
  int q,w,e,r,t,y,u;
  printf("Enter a five-digit number:");
  scanf("%d",&q);
  
  if(q>9999 && q<100000)
  {
  w=q/10000;
  e=q/1000-w*10;
  r=q/100-w*100-e*10;
  t=q/10-w*1000-e*100-r*10;
  y=q-w*10000-e*1000-r*100-t*10;
  u=y*10000+t*1000+r*100+e*10+w;
  if(u==q)
    printf("Number in reverse if equal to original number\n");
  else
    printf("Number in reverse order is %d and is not equal to original number\n",u);
  }
  else
	 printf("I asked you to enter a five digit number\n"); 
  return 0;
}
