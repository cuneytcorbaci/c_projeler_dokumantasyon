#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
  int *ogr,i,j,osay,ysay;
void  main(){
   clrscr();
   printf("��renci say�s�n� giriniz :");scanf("%d",&osay);
   printf("Yemek say�s�n� giriniz :");scanf("%d",&ysay);
    ogr=(int *)malloc(osay*sizeof(int));
