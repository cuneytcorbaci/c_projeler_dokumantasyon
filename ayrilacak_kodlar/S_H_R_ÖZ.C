#include<stdio.h>
#include<conio.h>
  main()
  {
    int kar;
    int rakam,ozel,harf;
    clrscr();
    rakam=0;
    harf=0;
    ozel=0;
    while ((kar=getchar())!='\n')
      if(kar >= '0' && kar <= '9')
       ++rakam;
       else
	 if (kar>='A' && kar<='Z' || kar >='a' && kar<='z')
	  ++harf;
	 else
	   ++ozel;
      printf("\n girilen rakam  sayisi %d ",rakam);
      printf("\n girilen harf  sayisi %d ",harf);
      printf("\n girilen ozel  sayisi %d ",ozel);
      return(0);
      }


