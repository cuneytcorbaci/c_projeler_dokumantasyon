#include <stdio.h>
#include <conio.h>
main()
{int s1,s2;
float son;
clrscr();
gotoxy(5,3);printf("Birinci Say�y� Giriniz = ");scanf("%d",&s1);
K:
gotoxy(5,4);clreol();printf("�kinci Say�y� Giriniz  = ");scanf("%d",&s2);
if (s2>s1)
{gotoxy(5,10);printf("Birinci Say� �kinciden B�y�k Olmal�d�r.L�tfen �kinci Say�y� Tekrar Giriniz.");
 goto K;}
son=(s1%s2);
if (son==0)
{gotoxy(5,10);clreol();printf("�kinci Say� Birincisine Tam Olarak B�l�nebilmektedir...");}
else
{gotoxy(5,10);clreol();printf("�kinci Say� Birincisine Tam Olarak B�l�nememektedir...");}
getche();
}