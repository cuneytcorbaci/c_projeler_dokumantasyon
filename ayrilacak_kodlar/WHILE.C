#include <stdio.h>
#include <conio.h>
main()
 {
  char c;
  int s=0;
  clrscr();
  cprintf("***** Bu Program Girilen Karakterler Dizisindeki Sesli Harfleri Sayar.**********\n");
  cprintf("*************** Tab Tuüuna Basçlçnca Bilgi Giriüi Sonlandçrçlçr. ***************\n");
  while ((c=getch())!='\t')
   {printf("%c",c);
    if ((c=='a') || (c=='A') || (c=='e') || (c=='E') || (c=='ç') || (c=='I') || (c=='i') ||
	(c=='ò') || (c=='o') || (c=='O') || (c=='î') || (c=='ô') || (c=='u') || (c=='U') ||
	(c=='Å') || (c=='ö')) s++;
   }
  printf("\n\n\n*********** Girdißiniz Karakterlerden %i Tanesi Sesli Harfdir.******************",s);
  getch();
  return 0;
 }
