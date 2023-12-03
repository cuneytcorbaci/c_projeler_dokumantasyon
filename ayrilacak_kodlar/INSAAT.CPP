#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
main()
{
float a,b,c,t;
clrscr();
window(5,5,75,18);textbackground(9);
a=0;

do
{
clrscr();
gotoxy(5,2);printf("uzunlugu giriniz...: ");
scanf("%f",&a);
gotoxy(5,4);printf("adet sayisini  giriniz...: ");
scanf("%f",&b);
c=a*b;
t=t+c;
gotoxy(5,8);printf("carpim...: %10.0f",c);
gotoxy(5,10);printf("toplam...: %10.0f",t);
delay(2000);
}while(a!=0);

getch();}

