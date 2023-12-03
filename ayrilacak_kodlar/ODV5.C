//ferhat gursu girilen sayinin asal olup olmadigini bulan program
#include<stdio.h>
#include<conio.h>

main()
{
 int  sayi,i,k=2;
 char devam='E';


 While (devam!='H')
  {
   clrscr();
   printf("Sayiyi girin..:");
   scanf("%i",&sayi);
   for (k=2;k<sayi;k++)
    {
     if (sayi%k==0)
      {
       printf("bu sayi asal degil");
       i=1;break;
      }
    }
   if (i!=1)  printf("bu sayi asal\n ");
   printf("Devam Edecekmisiniz  [E \ H] ");
   devam=getch();
  }
}

