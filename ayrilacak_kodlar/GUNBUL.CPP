#include <stdio.h>
#include <conio.h>
main()
{int gun1,gun2,gun3,ay1,ay2,ay3,yil1,yil2,son;
K:
clrscr();
gotoxy(5,3);printf("Do�um Tarihinizi Giriniz...");
gotoxy(5,5);printf("G�n...:");scanf("%d",&gun1);
gotoxy(5,6);printf("Ay....:");scanf("%d",&ay1);
gotoxy(5,7);printf("Y�l...:");scanf("%d",&yil1);
gotoxy(5,10);printf("Bug�n�n Tarihini Giriniz...");
gotoxy(5,12);printf("G�n...:");scanf("%d",&gun2);
gotoxy(5,13);printf("Ay....:");scanf("%d",&ay2);
gotoxy(5,14);printf("Y�l...:");scanf("%d",&yil2);
if (gun1<=gun2)
{
gun3=gun2-gun1;
    if (ay1<=ay2) {ay3=(ay2-ay1)*30; son=(yil2-yil1)*365+ay3+gun3;}
    if (ay1>ay2) {ay3=(ay1-ay2)*30; son=(yil2-yil1)*365-ay3+gun3;}
}
if (gun1>gun2)
{
gun3=gun1-gun2;
    if (ay1<=ay2) {ay3=(ay2-ay1)*30; son=(yil2-yil1)*365+ay3-gun3;}
    if (ay1>ay2) {ay3=(ay1-ay2)*30; son=(yil2-yil1)*365-ay3-gun3;}
}
if (son<0) {gotoxy(5,18);printf("Do�um Tarihiniz �zerinde Bulundu�unuz G�nden Daha �nce Olmal�d�r. L�tfen    Girece�iniz De�erleri Tekrar G�zden Ge�irip Do�rular� �le De�i�tiriniz!!!");
getche();goto K;}
gotoxy(5,18);printf("%d",son);printf(" G�nd�r Hayattas�n�z...");
getche();
}