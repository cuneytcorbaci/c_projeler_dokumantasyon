#include <stdio.h>
#include <conio.h>
main()
 {
  char c;
  int s=0;
  clrscr();
  cprintf("***** Bu Program Girilen Karakterler Dizisindeki Sesli Harfleri Sayar.**********\n");
  cprintf("*************** Tab Tu�una Bas�l�nca Bilgi Giri�i Sonland�r�l�r. ***************\n");
  while ((c=getch())!='\t')
   {printf("%c",c);
    if ((c=='a') || (c=='A') || (c=='e') || (c=='E') || (c=='�') || (c=='I') || (c=='i') ||
	(c=='�') || (c=='o') || (c=='O') || (c=='�') || (c=='�') || (c=='u') || (c=='U') ||
	(c=='�') || (c=='�')) s++;
   }
  printf("\n\n\n*********** Girdi�iniz Karakterlerden %i Tanesi Sesli Harfdir.******************",s);
  getch();
  return 0;
 }
