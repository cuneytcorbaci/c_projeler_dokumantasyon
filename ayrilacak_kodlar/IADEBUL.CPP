#include <stdio.h>
#include <conio.h>
main()
{char soy[20],ad[20],sno[10];
long int maas,ftop;float iade;
clrscr();
gotoxy(5,3);printf("Ad...............: ");scanf("%s",ad);
gotoxy(5,4);printf("Soyad............: ");scanf("%s",soy);
gotoxy(5,5);printf("Sicil No.........: ");scanf("%s",sno);
K:
gotoxy(5,15);clreol();gotoxy(1,16);clreol();
gotoxy(5,6);clreol();printf("Maaü.............: ");scanf("%ld",&maas);
gotoxy(5,7);clreol();printf("Fatura Toplamç...: ");scanf("%ld",&ftop);
if (ftop>maas)
{gotoxy(5,15);printf("Fatura Toplamç Maaütan KÅáÅk Olmalçdçr. LÅtfen Gireceßiniz Deßerleri Tekrar Gîzden Geáirip Doßrularç òle Deßiütiriniz!!!");
getche();goto K;}
if (maas<5000000) {iade=ftop*0.2;gotoxy(5,8);printf("Äalçüançn Alacaßç òade Toplamç = %10.2f",iade);}
if ((maas>5000000)&&(maas<10000000)) {iade=ftop*0.15;gotoxy(5,8);printf("Äalçüançn Alacaßç òade Toplamç = %10.2f",iade);}
if ((maas>10000000)&&(maas<50000000)) {iade=ftop*0.1;gotoxy(5,8);printf("Äalçüançn Alacaßç òade Toplamç = %10.2f",iade);}
if (maas>50000000) {iade=ftop*0.05;gotoxy(5,8);printf("Äalçüançn Alacaßç òade Toplamç = %10.2f",iade);}
getche();
}

