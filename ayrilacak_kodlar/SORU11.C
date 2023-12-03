#include<stdio.h>
#include<conio.h>
#include<math.h>

     double top;
     int i,j;
     main(void)
 {
     clrscr();
     j=2;
    for (i=2;i<=4;++i)
   {
     top+=pow((12/j),i);
     j+=2;
    }
     printf("dizinin  toplam ===>=%lf",top);
     getch();
     return(0);
   }



