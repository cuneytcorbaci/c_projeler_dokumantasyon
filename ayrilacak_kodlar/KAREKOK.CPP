#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{long int s1;
clrscr();
gotoxy(5,3);printf("K�k�n� Bulmak �stedi�iniz Say�y� Giriniz...: ");scanf("%ld",&s1);
gotoxy(5,5);printf("Girilen Say�n�n Karek�k�...................: %10.2f",sqrt(s1));
getche();
}

