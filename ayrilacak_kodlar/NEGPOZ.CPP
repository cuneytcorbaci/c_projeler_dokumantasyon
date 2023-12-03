#include <stdio.h>
#include <conio.h>
main()
{int sayi;
clrscr();
gotoxy(5,3);printf("Bir Sayç Giriniz = ");scanf("%d",&sayi);
if (sayi<0)
{gotoxy(5,8);printf("Girilen Sayç Negatiftir....");}
if (sayi==0)
{gotoxy(5,9);printf("Girilen Sayç Sçfçrdçr......");}
if (sayi>0)
{gotoxy(5,10);printf("Girilen Sayç Pozitiftir...");}
getche();
}

