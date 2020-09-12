#include<stdio.h>
int main(){
printf("Enter Number of Days you are late:");
/*Then...*/
int d;
float t,y;
scanf("%d",&d);
if(d<30)
{
if(d<=5)
t=0.5;
else if(d>=6&&d<=10)
t=1;
else if(d>10&&d<30)
t=5;
y=t*d;

printf("You need to pay fine of rupees %f\n",y);
}
else
puts("Your membership is cancelled");

return 0;
}
