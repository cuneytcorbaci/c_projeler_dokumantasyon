#include <conio.h>
#include <stdio.h>
main()
 {
  int i;
  clrscr();
  cprintf("**************** Bu Program Girilen Bir Say�n�n Pozitif mi,Negatif mi *************************************veya S�f�r Oldu�unu Bulur Bulur. **");
  cprintf("************************************************** Bir Tu�a Bas�n. *******************************\n");
  getch();
  clrscr();
  cprintf("Say�y� Giriniz..:");
  scanf("%i",&i);
  if (i<0)
   printf("\nSay� Negatiftir");
  else
   if (i==0)
    printf("\nSay� S�f�rd�r.");
   else
    printf("\nSay� Pozitiftir.");

  getch();
  return 0;
 }