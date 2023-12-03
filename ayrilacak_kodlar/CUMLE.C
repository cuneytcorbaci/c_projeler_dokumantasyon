#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
const indis=5;
char dizi[100];



void sirala(int index ,int uzunluk){
  if  (index<=uzunluk){
  index++;

  sirala(index,uzunluk);
  printf("%c",dizi[index-1]);
  }


}


void main(){
int uz;
clrscr();

 printf(" cmleyigir :");gets(dizi);


uz=strlen(dizi);
sirala(0,uz);
getch();
}
