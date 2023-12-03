#include <stdio.h>
#include <conio.h>
main()
{int s1,s2;
float son;
clrscr();
gotoxy(5,3);printf("Birinci Sayçyç Giriniz = ");scanf("%d",&s1);
K:
gotoxy(5,4);clreol();printf("òkinci Sayçyç Giriniz  = ");scanf("%d",&s2);
if (s2>s1)
{gotoxy(5,10);printf("Birinci Sayç òkinciden BÅyÅk Olmalçdçr.LÅtfen òkinci Sayçyç Tekrar Giriniz.");
 goto K;}
son=(s1%s2);
if (son==0)
{gotoxy(5,10);clreol();printf("òkinci Sayç Birincisine Tam Olarak BîlÅnebilmektedir...");}
else
{gotoxy(5,10);clreol();printf("òkinci Sayç Birincisine Tam Olarak BîlÅnememektedir...");}
getche();
}