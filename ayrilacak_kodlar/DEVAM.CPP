#include<conio.h>
#include<stdio.h>
#include<dos.h>
main()
{
char ch;
textbackground(9);clrscr();
do{
     do
	{
	window(20,15,60,19);textbackground(5);clrscr();
	gotoxy(3,3);printf("DEVAM ETMEK ISTIYORMUSUNUZ  [E]/[H] ?");
	ch=getchar();
	}
     while(ch!='e' && ch!='h' && ch!='E' && ch!='H');
     if(ch=='e' || ch=='E')
	{
	clrscr();gotoxy(10,3);printf("ISLEMLERE DEVAM EDILIYOR");sound(1000);delay(3000); nosound();
	}
   }
while(ch!='h' && ch!='H');
}
