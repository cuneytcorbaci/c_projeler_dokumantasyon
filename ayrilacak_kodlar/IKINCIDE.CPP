#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
main()
{int a,b,c,delta; float k1,k2;
  clrscr();
  printf("1. Katsay�..:");scanf("%d",&a);
  printf("2. Katsay�..:");scanf("%d",&b);
  printf("3. Katsay�..:");scanf("%d",&c);
  delta=(b*b-4*a*c);
  if (delta<0) {printf("\nDenklemin Reel K�k� Yoktur.");}
    else
      if (delta==0)  {printf("\n Denklemin �ak���k(e�it) �ki K�k� Vard�r.");
	k1=(-b/(2*a));printf("\n Denklemin K�kleri:%5.2f",k1);}
	else {printf("\nDenklemin Farkl� �ki K�k� Vard�r.");}
  if (delta>0)
  { k1=((-b-sqrt(delta))/(2*a));
    k2=((-b+sqrt(delta))/(2*a));
    printf("\nDenklemin Birinci K�k�.........:%2.5f",k1);
    printf("\nDenklemin �kinci K�k�..........:%2.5f",k2);
  }
 getch();
}