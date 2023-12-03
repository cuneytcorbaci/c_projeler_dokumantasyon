#include <conio.h>
#include <stdio.h>
main()
 {
  float t;
  int i,j;
  clrscr();
  cprintf(" Bu Program Girilen Sayçlarçn Ortalamasçnç Verir. \n");
  cprintf("Girilen Sayç Eksi Olursa Bilgi Giriüi Sonlançr. \n");
  j=0,i=0,t=0;
  do
   {scanf("%i",&i);
    if (i>0) {j++;t+=i;}
   }while(i>0);
   if (t>0) t/=j;
   printf(" Girdißiniz %i sayçnçn Ortalamasç %5.2f dir.",j,t);
   getch();
   return 0;
 }

