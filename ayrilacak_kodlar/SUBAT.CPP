#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{double sonuc;int yil;
clrscr();
gotoxy(5,3);printf("Y�l� Giriniz : ");scanf("%d",&yil);
clrscr();
sonuc=(yil%4);
if (sonuc==0)
{gotoxy(5,10);printf("%d",yil);printf(" Y�l�nda �ubat Ay� 29 G�n �ekmektedir...");}
else
{gotoxy(5,10);printf("%d",yil);printf(" Y�l�nda �ubat Ay� 28 G�n �ekmektedir...");}
getche();
}