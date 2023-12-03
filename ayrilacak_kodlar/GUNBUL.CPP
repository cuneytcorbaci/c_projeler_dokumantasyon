#include <stdio.h>
#include <conio.h>
main()
{int gun1,gun2,gun3,ay1,ay2,ay3,yil1,yil2,son;
K:
clrscr();
gotoxy(5,3);printf("Doßum Tarihinizi Giriniz...");
gotoxy(5,5);printf("GÅn...:");scanf("%d",&gun1);
gotoxy(5,6);printf("Ay....:");scanf("%d",&ay1);
gotoxy(5,7);printf("Yçl...:");scanf("%d",&yil1);
gotoxy(5,10);printf("BugÅnÅn Tarihini Giriniz...");
gotoxy(5,12);printf("GÅn...:");scanf("%d",&gun2);
gotoxy(5,13);printf("Ay....:");scanf("%d",&ay2);
gotoxy(5,14);printf("Yçl...:");scanf("%d",&yil2);
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
if (son<0) {gotoxy(5,18);printf("Doßum Tarihiniz özerinde Bulundußunuz GÅnden Daha ônce Olmalçdçr. LÅtfen    Gireceßiniz Deßerleri Tekrar Gîzden Geáirip Doßrularç òle Deßiütiriniz!!!");
getche();goto K;}
gotoxy(5,18);printf("%d",son);printf(" GÅndÅr Hayattasçnçz...");
getche();
}