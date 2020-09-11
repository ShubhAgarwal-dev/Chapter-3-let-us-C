#include<stdio.h>
#include<math.h>
int main()
{
  int q,w,e,r,t,u;
  printf("Enter coordinates of center of circle and radius of circle and coordinates of points you want to know relative position about:");
  scanf("%d %d %d %d %d",&q,&w,&e,&r,&t);
  u=pow((r-q),2)+pow((t-w),2)-pow(e,2);
  if(u==0)
    printf("given point is on the given circle\n");
  else if(u>0)
    printf("given point is  outside the given circle\n");
  else
    printf("given point is inside the circle\n");
  return 0;
}
