#include<stdio.h>
#include<conio.h>

   float ktop;
   int top,i,n;
   main(void)
 {
 clrscr();
   printf("n degerini giriniz");
    scanf("%i",&n);
   for (i=1;i<=n;i++)
    {
     top+=i;
     ktop+=(i*i);
    }
     printf("1 den %i ekadar olan saylarn  toplam=%i ve ktop=%0.3f  top dir",n,top,ktop);
     getch();
     return(0);
   }



