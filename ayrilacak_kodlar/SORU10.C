#include<stdio.h>
#include<conio.h>
#include<math.h>

     double top,i;

     main(void)
 {
     clrscr();
     for (i=2;i<=83;++i)
    {
     top+=pow((0.5),i);
    }
     printf("dizinin  toplam ===>=%lf",top);
     getch();
     return(0);
   }



