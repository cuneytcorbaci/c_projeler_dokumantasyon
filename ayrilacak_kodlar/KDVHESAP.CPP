#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
main()
{char devam,ad[20],soy[20]; int sicil;long maas,fatura; float kdv,net;
   devam='e';
   while ( devam!='h')
   {
   clrscr();
   printf("Ad�n� Giriniz....................:");scanf("%s",ad);
   printf("Soyad�n� Giriniz.................:");scanf("%s",soy);
   printf("Sicil Numaras� Giriniz...........:");scanf("%d",&sicil);
   printf("Maa� Tutar� Giriniz..............:");scanf("%ld",&maas);
   printf("Fatura Tutar�n� Giriniz..........:");scanf("%ld",&fatura);
   if (fatura<=maas)
     {
      if ((0<=fatura)&&(fatura<=5000))  kdv=(fatura/20);
	 else
	   if ((5000<fatura)&&(fatura<=10000)) {kdv=(1000+(fatura/15));}
	      else
		if ((10000<fatura)&&(fatura<=50000)){kdv=(2500+(fatura/10));}
		   else kdv=(fatura/5);
      net=kdv+maas;
      clrscr();
      printf("\nad�.........................:%-s",ad);
      printf("\nsoyad�......................:%-s",soy);
      printf("\n\tmaas......................:%ld",maas);
      printf("\n\tfatura....................:%ld",fatura);
      printf("\n\tvergi iadesi toplam�......:%5.2f",kdv);
      printf("\n\ttoplam maa�...............:%5.2f",net);
      printf("\n\tdevam edecekmisiniz.......<e-h>");
      }
      else printf("\nFatura Tutar� Maa�'dan B�y�k");
    devam = getch();
    }
  }


