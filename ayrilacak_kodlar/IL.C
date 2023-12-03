//BU PROGRAM ADI VE MEMLEKET KODUNU OKUYARAK HANGI ILDEN KAC ADET OGRENCI
//GIRILDI¦INI BULUR.
//ONUR ULUSOY 97030034240

#include"stdio.h"
#include"conio.h"

main()
{
   char isim[15];
   int mem_kod[82];
   int i,k,kod;
	clrscr();
	  for (i=1;i<82;i++)
	     mem_kod[i]=0;
	  for(i=1; i<4; i++)
	     {
		printf("\n\n”§renci ismini girin :");
		scanf("%s",isim);
		printf("\nmemleket kodunu girin :");
		scanf("%d",&kod);
		mem_kod[kod]=mem_kod[kod]+1;
	     }
		for(i=1; i<82; i++)
		  {
      printf("\n\n %d koda ait ilden \n %d adet vardr.",i,mem_kod[i]);
      if(i==1||i==8||i==16||i==24||i==32||i==40||i==48||i==56||i==64||i==72||i==80||i==81)
      getchar();
     }}