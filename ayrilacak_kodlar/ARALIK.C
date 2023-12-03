#include<stdio.h>
main()
{int i,x,gu,ge,ebgu=-30000,ekgu=30000,ebge=-30000,ekge=30000;
 char ch='e';
 while(ch!='h')
 {clrscr();
 for(i=1;i<=31;i++)
 {printf("\n%d.GUNDUZ SICAKLIGINI GIRINIZ...:",i);scanf("%d",&gu);
  printf("%d.GECE SICAKLIGINI GIRINIZ.....:",i);scanf("%d",&ge);
  if(ebgu<gu) ebgu=gu;
  if(ekgu>gu) ekgu=gu;
  if(ebge<ge) ebge=ge;
  if(ekge>ge) ekge=ge;
 }
 printf("\nEN BUYUK GUNDUZ=%d",ebgu);
 printf("\nEN KUCUK GUNDUZ=%d",ekgu);
 printf("\nEN BUYUK GECE=%d",ebge);
 printf("\nEN KUCUK GECE=%d",ekge);
 printf("DEVAM MI?..:");ch=getch();
}
}
