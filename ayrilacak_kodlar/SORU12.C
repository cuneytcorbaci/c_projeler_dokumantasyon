#include<stdio.h>
#include<conio.h>
#include<math.h>

  int i,top;
  main(void)

  { clrscr();
    for(i=4;i<=10;i+=2)
   {
    top+=i+(i/2);
    printf("i=======>%i\n",top);
   }
   printf("serinin toplam=====>>>%i dir",top);
   return(0);
 }