#include<stdio.h>
#include<conio.h>
#include<a:cursor.c>
#include<a:dolu.c>
main()
{int sa,da,sn,i,j,k;
textbackground(0);clrscr();
printf("SAATI GIRINIZ........:");scanf("%d",&sa);
printf("DAKIKAYI GIRINIZ.....:");scanf("%d",&da);
printf("SANIYEYI GIRINIZ.....:");scanf("%d",&sn);curs(1,0);clrscr();

ciz(22,12,35,15);textcolor(10);gotoxy(26,13);printf("CASIO");textcolor(5);
for(i=sa;i<24;i++)
for(j=da;j<60;j++)
{for(k=sn;k<60;k++)
{gotoxy(25,14);cprintf("%02d:%02d:%02d",i,j,k);
if(k==59) sn=0;
if(j==59) {da=0;sn=0;}
if(i==23) {sa=da=sn=0;}delay(1000);
}printf("\a");
}}