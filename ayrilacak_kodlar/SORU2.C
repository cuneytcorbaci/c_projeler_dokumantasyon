#include<stdio.h>
#include<conio.h>
  float sayi,top;
   float ort;
   int i,n;
   main(void)
 {
 clrscr();
   printf("n degerini giriniz");
    scanf("%i",&n);
   for (i=1;i<=n;i++)
    {
     printf("%i.ci sayy gir",i);
     scanf("%f",&sayi);
     top+=sayi;
    }
     ort=top / n;
     printf("%i saynn ortalamas=%0.3f toplam=%0.3f dir",n,ort,top);
     getch();
     return(0);
   }



