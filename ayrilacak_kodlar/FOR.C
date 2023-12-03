#include <conio.h>
#include <stdio.h>
main()
 {
  float f=1;
  int i=1,s;
  clrscr();
  cprintf("********** Bu Program Girilen Pozitif Sayçnçn Faktîriyelini Bulur. *************\n");
  cprintf("********************************* Bir Tuüa Basçn. ******************************\n");
  getch();
  clrscr();
  cprintf("Faktîriyeli Alçnacak Sayçyç Giriniz..:");
  scanf("%i",&s);
  if (s<25)
   {for (i=1;i<=s;i++) f*=i;
    printf("%i nin faktîriyeli...: %10.0f dir.",s,f);
   }
   else cprintf("Faktîriyelini Almak òstedißiniz Sayç 25 den KÅáÅk Olmalç.");
  getch();
  return 0;
 }

