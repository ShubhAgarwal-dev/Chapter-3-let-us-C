#include<stdio.h>
int main()
{
    int a,b,c,q,w,e;
    printf("Enter Sides of tringle:");
    scanf("%d %d %d",&a,&b,&c);

    //validating triangle

    q=a+b-c;
    w=a+c-b;
    e=c+b-a;

    if(q>0 && w>0 && e>0)
	    printf("A triangle is possible with all these sides\n");

    else 
	   printf("A trianagle with these set of sides is impossible\n");
    return 0;
}
