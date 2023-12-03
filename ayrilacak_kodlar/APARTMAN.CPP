#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
  int kat,*pkat,i,j;
  char *a;
void  main(){
  clrscr();
  printf("Kat sayçsçnç bulunuz");scanf("%d",&kat);
  pkat=(int *)malloc(kat);
  for(i=0;i<kat;i++)
   {
     pkat[i]=1;
   }
   for(i=0;i<kat;i++)
   {
     printf("%d\n",pkat[i]);
   }

   for(i=1;i<=kat;i++)
   {
     for(j=i;j<=kat;j++)
	if (pkat[j]==1) pkat[j]=0; else pkat[j]=1;
   }


   for(i=1;i<=kat;i++)
   {
     printf("%d\n",pkat[i]);
   }



  getch();
}