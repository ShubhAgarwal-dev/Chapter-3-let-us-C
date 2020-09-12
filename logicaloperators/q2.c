#include<stdio.h>
int main()
{
char a;
printf("Press any key:");
scanf("%c",&a);
if((a>=65)&&(a<=75))
puts("You Entered a capital letter");
/*Puts("....") command is printf("....\n")*/
if(a>96 && a<123)
puts("You entered a small case letter");
if(a>47 && a<58)
puts("You entered a digit");
if((a<48)||(a>57 && a<65)||(a>90 && a<97)||(a>122 && a< 128))
puts("You entered a specia symbol");
return 0;
}
