#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{float a,b,c,k;
clrscr();
gotoxy(5,3);printf("Denklemin Katsayçlarçnç Giriniz...");
gotoxy(5,5);printf("a Katsayçsç...:");scanf("%f",&a);
gotoxy(5,6);printf("b Katsayçsç...:");scanf("%f",&b);
gotoxy(5,7);printf("c Katsayçsç...:");scanf("%f",&c);
k=b*b-4*a*c;
if (k<0)
{gotoxy(5,10);printf("Oluüturulan Denklemin Geráel Kîkleri Yoktur...");}
if (k==0)
{gotoxy(5,10);printf("Oluüturulan Denklemin Äakçüçk òki KîkÅ Vardçr...");
gotoxy(5,11);printf("Kîk = %10.2f",-b/(2*a));}
if (k>0)
{gotoxy(5,10);printf("Oluüturulan Denklemin òki Farklç KîkÅ Vardçr...");
gotoxy(5,11);printf("Birinci Kîk = %10.2f",((-b-sqrt(k))/(2*a)));
gotoxy(5,12);printf("òkinci Kîk  = %10.2f",((-b+sqrt(k))/(2*a)));}
getch();
}
