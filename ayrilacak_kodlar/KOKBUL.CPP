#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{float a,b,c,k;
clrscr();
gotoxy(5,3);printf("Denklemin Katsay�lar�n� Giriniz...");
gotoxy(5,5);printf("a Katsay�s�...:");scanf("%f",&a);
gotoxy(5,6);printf("b Katsay�s�...:");scanf("%f",&b);
gotoxy(5,7);printf("c Katsay�s�...:");scanf("%f",&c);
k=b*b-4*a*c;
if (k<0)
{gotoxy(5,10);printf("Olu�turulan Denklemin Ger�el K�kleri Yoktur...");}
if (k==0)
{gotoxy(5,10);printf("Olu�turulan Denklemin �ak���k �ki K�k� Vard�r...");
gotoxy(5,11);printf("K�k = %10.2f",-b/(2*a));}
if (k>0)
{gotoxy(5,10);printf("Olu�turulan Denklemin �ki Farkl� K�k� Vard�r...");
gotoxy(5,11);printf("Birinci K�k = %10.2f",((-b-sqrt(k))/(2*a)));
gotoxy(5,12);printf("�kinci K�k  = %10.2f",((-b+sqrt(k))/(2*a)));}
getch();
}
