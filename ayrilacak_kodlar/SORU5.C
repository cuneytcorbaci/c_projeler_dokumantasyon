#include<stdio.h>
#include<conio.h>

   float ort, ktop;
   int sayac,top,i,n;
   main(void)
 {
 clrscr();
   printf("n degerini giriniz");
    scanf("%i",&n);
   for (i=1;i<=n;i=i+2)
    {
     ++sayac;
     top+=i;
     ktop+=(i*i);
    }
     ort=top / sayac;
     printf("1 den %i ekadar olan saylarn  toplam=%i ve ktop=%0.3f  top dir",n,top,ktop);
     printf("%i saydan tek olanlarn ortalamas=%f",n,ort);
     getch();
     return(0);
   }



