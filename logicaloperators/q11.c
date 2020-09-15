#include<stdio.h>
int main()
{
	int d,m;
	printf("Enter your date of birth and month you are born in:");
	scanf("%d %d",&d,&m);

	if((m==12 && d>=22)||(m==1 && d<=19))
		printf("Your Zodiac sign is Capricon.\n");

	if((m==1 && d>=20)||(m==2 && d<=17))
		printf("Your Zodiac Sign is Aquarius.\n");

	if((m==2 && d>=18)||(m==3 && d<=19))
		printf("Your Zodiac sign is Pisces\n");

	if ((m==3 && d>=20)||(m==4 && d<=19))
		printf("Your Zodiac sign is Aries\n");

	if((m==4 && d>=20)||(m==5 && d<=20))
		printf("Your Zodiac sign is Taurus\n");

	if((m==5 && d>=21)||(m==6 && d<=20))
		puts("Your Zodiac sign is Gemini");

	if ((m==6 && d>=21)||(m==7 && d<=22))
		puts("Your zodiac sign is Cancer");

	if((m==7 && d>=23 )||(m==8 && d<=22))
		puts("Your Zodiac Sign is Leo");

	if((m==8 && d>=23)||(m==9 && d<=22))
		puts("Your Zodiac sign is Virgo");

	if ((m==9 && d>=23)||(m==10 && d<=22))
		printf("Your Zodiac Sign is Libra\n");

	if((m==10 && d>=23)||(m==11 && d<=21))
		puts("Your Zodiac sign is Scorpio");

	if((m==11 && d>=22)||(m==12 && d<=21))
		puts("Your Zodiac sign is Sagittarius");

	return 0;
}