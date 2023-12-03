#include <conio.h>
#include <stdio.h>
main()
 {
  int i;
  clrscr();
  cprintf("**************** Bu Program Girilen Bir Sayçnçn Pozitif mi,Negatif mi *************************************veya Sçfçr Oldußunu Bulur Bulur. **");
  cprintf("************************************************** Bir Tuüa Basçn. *******************************\n");
  getch();
  clrscr();
  cprintf("Sayçyç Giriniz..:");
  scanf("%i",&i);
  if (i<0)
   printf("\nSayç Negatiftir");
  else
   if (i==0)
    printf("\nSayç Sçfçrdçr.");
   else
    printf("\nSayç Pozitiftir.");

  getch();
  return 0;
 }