#include "stdio.h"
int main(int argc, char const *argv[])
{
  int a,b,c;
  printf("Please enter age of Ram,Shyam and Ajay respectively:\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a<b && a<c)
    printf("Ram is youngest among them\n");
  if(b<c && b<a)
    printf("Shyam is the youngest among them\n");
  if(c<a && c<b)
    printf("Ajay is the youngest among them\n");
  if(a==b && a<c)
    printf("Shyam and Ram are of same age and younger than Ajay\n");
  if(a==c && a<b)
    printf("Ram and Ajay are of same age and younger than Shyam\n");
  if(b==c && b<a)
    printf("Shyam and Ajay are of same age and younger than Ram\n");
  if(a==b && b==c)
    printf("All 3 of them have same age\n");
  return 0;
}
