#include <conio.h>
#include <stdio.h>
main()
 {
  float f=1;
  int i=1,s;
  clrscr();
  cprintf("********** Bu Program Girilen Pozitif Say�n�n Fakt�riyelini Bulur. *************\n");
  cprintf("********************************* Bir Tu�a Bas�n. ******************************\n");
  getch();
  clrscr();
  cprintf("Fakt�riyeli Al�nacak Say�y� Giriniz..:");
  scanf("%i",&s);
  if (s<25)
   {for (i=1;i<=s;i++) f*=i;
    printf("%i nin fakt�riyeli...: %10.0f dir.",s,f);
   }
   else cprintf("Fakt�riyelini Almak �stedi�iniz Say� 25 den K���k Olmal�.");
  getch();
  return 0;
 }

