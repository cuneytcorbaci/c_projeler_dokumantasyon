#include <conio.h>
#include <stdio.h>
main()
 {
  float t;
  int i,j;
  clrscr();
  cprintf(" Bu Program Girilen Say�lar�n Ortalamas�n� Verir. \n");
  cprintf("Girilen Say� Eksi Olursa Bilgi Giri�i Sonlan�r. \n");
  j=0,i=0,t=0;
  do
   {scanf("%i",&i);
    if (i>0) {j++;t+=i;}
   }while(i>0);
   if (t>0) t/=j;
   printf(" Girdi�iniz %i say�n�n Ortalamas� %5.2f dir.",j,t);
   getch();
   return 0;
 }

