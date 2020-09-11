#include<stdio.h>
int main()
{
  int q,w,e,r,t,y,u;
  printf("Enter Coordinates of Three points in standard way:");
  scanf("%d %d %d %d %d %d",&q,&w,&e,&r,&t,&y);
  u=q*(r-y)+e*(y-w)+t*(w-r); /*Area*/
  if(u==0)
    printf("Ya all of these three points lie on the same line\n");
  else
    printf("No they do not lie on the same line\n");
  return 0;
}
