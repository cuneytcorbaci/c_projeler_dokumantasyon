#include <conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int satir,sutun,a;
int  matris[11][11];


void rasgele(){
   int sut,sat;

   for(sat=1;sat<=satir-1;sat++){

      for (sut=1;sut<=sutun-1;sut++){
	   randomize();
	   a=random(2);
	   matris[sat][sut]=a;

      }
   }
}

void yaz(){
int i,j;
  for (i=1;i<=satir;i++){
    for (j=1; j<=sutun;j++){
     printf("%d \t ",matris[i][j]);
    }
    printf("\n");
  }
}
int bul(int sat,int sut){
if (sat<=satir) {
  if (sut<=sutun) {
     if (matris[sat][sut]!=1) {
	printf("(%d,%d)",sat,sut);
	}
	sut++;
	bul(sat,sut);

   }
   else sut=1;
 sat++;
 bul(sat,sut);
}


}


void main(){
clrscr();

printf("Satr saysn giriniz :");scanf("%d",&satir);
printf("Stn saysn giriniz :");scanf("%d",&sutun);
rasgele();
yaz();
bul(1,1);
getch();
}
