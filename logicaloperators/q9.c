#include<stdio.h>
int main()
{
	//Boxer weight class 
	float w;
	printf("Enter Weight of Boxe(In pounds):");
	scanf("%f",&w);

	if(w<115)
		puts("Weight class is Flyweight");
	else if(w>115 && w<=121)
		puts("Weight class is Bantamweight");
	else if(w>121 && w<=153)
		puts("Weight class is Featherweight");
	else if(w>153 && w<=189)
		puts("Weight class is Middleweight");
	else
		puts("Weight class is Heavyweight");

	return 0;
}