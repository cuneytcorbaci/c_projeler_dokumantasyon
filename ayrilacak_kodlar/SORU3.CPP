#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
  int *ogr,i,j,osay,ysay;
  char *yemek[10];
void  main(){
   clrscr();
   printf("��renci say�s�n� giriniz :");scanf("%d",&osay);
   printf("Yemek say�s�n� giriniz :");scanf("%d",&ysay);
    ogr=(int *)malloc(osay*sizeof(int));
    yemek[10]=(char *)malloc(ysay);

   for (i=0;i<ysay;i++)
   {
    scanf("%s",*(yemek+i));

  }
   for (i=0;i<ysay;i++)
   {
    printf("%s",*(yemek+20*i));


  }




getch();
}