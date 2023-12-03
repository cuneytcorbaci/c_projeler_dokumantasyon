
/*Girilen syçnçn faktoriyelini alçr*/
#include <stdio.h>
#include <conio.h>

long factorial (int n)
 {
  int k;
  long fact=1;
  for (k=2;k<=n;++k)
  fact *=k;
  return fact;
  }

 void main()
  {
   int g;
   clrscr();
   puts("Sayç gir");scanf("%i",&g);
   printf("%ld\n",factorial(g));
   getch();
  }


