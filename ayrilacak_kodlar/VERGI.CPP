#include<stdio.h>
#include<conio.h>

main()
{
char firma[100][20] ;
int vergi[100];
char tf[20];
int tv,say,i,j;
for(say=1;say<=100;++say)
{
printf("%d . firmann ad:",say);scanf("%c",firma[say]);
printf("%d . firmann vergi miktar :",say+1);scanf("%d",&vergi[say]);

}
for (i=1;i<=99;i++) {
   for (j=1;j<=100;j++) {
   if (vergi[i]<vergi[j]) {
   tf= vergi[i];
   vergi[i]=vergi[j];
   vergi[j]=tf;
   tv=vergi[i];
   vergi[i]=vergi[j];
   vergi[j]=tv;
    }

   }


}

getch();
}