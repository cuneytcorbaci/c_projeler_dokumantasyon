#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
  int *ogr,i,j,osay,ysay;
void  main(){
   clrscr();
   printf("ôßrenci sayçsçnç giriniz :");scanf("%d",&osay);
   printf("Yemek sayçsçnç giriniz :");scanf("%d",&ysay);
    ogr=(int *)malloc(osay*sizeof(int));
