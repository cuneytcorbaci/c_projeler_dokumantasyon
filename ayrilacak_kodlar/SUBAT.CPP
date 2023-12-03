#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{double sonuc;int yil;
clrscr();
gotoxy(5,3);printf("Yçlç Giriniz : ");scanf("%d",&yil);
clrscr();
sonuc=(yil%4);
if (sonuc==0)
{gotoxy(5,10);printf("%d",yil);printf(" Yçlçnda ûubat Ayç 29 GÅn Äekmektedir...");}
else
{gotoxy(5,10);printf("%d",yil);printf(" Yçlçnda ûubat Ayç 28 GÅn Äekmektedir...");}
getche();
}