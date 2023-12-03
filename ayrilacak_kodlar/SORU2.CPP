#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{int *dizi,indis,i,j,sayi,enb,tampon;
 clrscr();
 printf("òndis sayçsçnç giriniz :");scanf("%d",&indis);
  dizi=(int *)malloc(indis*sizeof(int));
  for (i=0;i<indis;i++)
  {
    scanf("%d",&sayi);
    *(dizi+i)=sayi;
  }

  for (i=0;i<indis-1;i++)
  {  enb=i;
    for (j=i;j<indis;j++)
      {  if( enb< *(dizi+j) )
		{enb=j;
		}

      }
   tampon=*(dizi+i);
   *(dizi+i)=*(dizi+enb);
   *(dizi+enb)=tampon;
  }

  for (i=0;i<indis;i++)
  {
   printf("%u\n",*(dizi+i));
  }
free(dizi);
getch();
}