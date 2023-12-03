#include<stdio.h>
#include<conio.h>
#include<math.h>

  int i,j,top;
  main(void)
  {
     clrscr();
    for(i=1;i<=20;++i)
    {
      for (j=1;j<=i;++j)
      { top+=j; }
    printf("i=======>%i\n",top);
    }

   printf("serinin toplam=====>>>%i dir",top);
   return(0);
 }