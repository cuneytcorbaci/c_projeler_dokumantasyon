#include <stdio.h>
#include <conio.h>
main()
{int sayi;
clrscr();
gotoxy(5,3);printf("Bir Say� Giriniz = ");scanf("%d",&sayi);
if (sayi<0)
{gotoxy(5,8);printf("Girilen Say� Negatiftir....");}
if (sayi==0)
{gotoxy(5,9);printf("Girilen Say� S�f�rd�r......");}
if (sayi>0)
{gotoxy(5,10);printf("Girilen Say� Pozitiftir...");}
getche();
}

