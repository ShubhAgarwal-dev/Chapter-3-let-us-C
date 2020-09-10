#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three angles to check if all 3 of them are possible in a single triangle:");
  scanf("%d %d %d",&a,&b,&c);
  if(a+b+c==180)
    printf("Ya they can exist together in a same triangle\n");
  else
    printf("its next to impossible to have a tringle with such angles\n");
  return 0;
}
