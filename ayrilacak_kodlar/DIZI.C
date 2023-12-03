#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
const indis=5;
int dizi[5];



void sirala(int index ){
  if  ((index<indis)&&(index>=0)){
  index++;

  sirala(index);
  printf("%d\n",dizi[index-1]);
  }


}


void main(){
int i;
clrscr();
for (i=0;i<indis;i++){
 printf(" %d. eleman :",i+1);scanf("%d",&dizi[i]);

}
sirala(0);

getch();
}
