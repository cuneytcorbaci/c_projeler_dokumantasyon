#include <stdio.h>
#include <conio.h>
main()
{int sayi;
double fak;
clrscr();
gotoxy(5,3);printf("Fakt�riyelini Almak �stedi�iniz Say�y� Giriniz = ");scanf("%d",&sayi);
fak=1;
if (sayi==0) fak=1;
else
{K:
fak=fak*sayi;
sayi=sayi-1;
if (sayi>0) goto K;
}
gotoxy(5,8);printf("Girilen Say�n�n Fakt�riyeli = %10.0f",fak);
getche();
}