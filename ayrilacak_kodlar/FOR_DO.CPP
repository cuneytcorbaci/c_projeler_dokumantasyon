/*  D�zenleyen   : M.Ferda G�VEN
	 Okul no-�ube : 97030060240-4/B                                         */
#include<stdio.h>
#include<conio.h>

main()
{
char i,j;
char isim[14]="M.Ferda G�VEN";
clrscr();
for(i=1,j=14;i<13;i++,j++)
	{gotoxy(i,i+5);
	 printf("%s",isim);
	 gotoxy(15+j,j-7);
	 printf("%s",isim);
	 }
getch();
return(0);
}
