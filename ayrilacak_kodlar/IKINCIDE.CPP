#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
main()
{int a,b,c,delta; float k1,k2;
  clrscr();
  printf("1. Katsayç..:");scanf("%d",&a);
  printf("2. Katsayç..:");scanf("%d",&b);
  printf("3. Katsayç..:");scanf("%d",&c);
  delta=(b*b-4*a*c);
  if (delta<0) {printf("\nDenklemin Reel KîkÅ Yoktur.");}
    else
      if (delta==0)  {printf("\n Denklemin Äakçüçk(eüit) òki KîkÅ Vardçr.");
	k1=(-b/(2*a));printf("\n Denklemin Kîkleri:%5.2f",k1);}
	else {printf("\nDenklemin Farklç òki KîkÅ Vardçr.");}
  if (delta>0)
  { k1=((-b-sqrt(delta))/(2*a));
    k2=((-b+sqrt(delta))/(2*a));
    printf("\nDenklemin Birinci KîkÅ.........:%2.5f",k1);
    printf("\nDenklemin òkinci KîkÅ..........:%2.5f",k2);
  }
 getch();
}