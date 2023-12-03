#include <conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int satir=3,sutun=3,a;
int  matris[4][4]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};


void rasgele(){
   int sut,sat;
	  randomize();
   for(sat=1;sat<=satir-1;sat++){

      for (sut=1;sut<=sutun-1;sut++){

	   a=random(2);
	   matris[sat][sut]=a;

      }
   }
}

void yaz(){
int i,j;
  for (i=1;i<=satir;i++){
    for (j=1; j<=sutun;j++){
     printf("%i \t ",matris[i][j]);
    }
    printf("\n");
  }
}
void bul(int sat,int sut,int deger){

int sutdeger,satdeger;
  if (deger==0 ){
    if (matris[1][1]==1){
	deger=1;
	bul(sat,sut,deger);
	printf("%d",matris[sat][sut]);
	}
	}

    if (deger!=0 ){

      if (matris[sat][sut]==1){
	 sutdeger=1;
	 bul(sat,sut++,2);
	 printf("(%d,%d)",sat,sut);
	 }
	 else {
	 satdeger=1;
	 bul(sat++,sut--,2);
	 printf("(%d,%d)",sat,sut);
	}

    }




}


void main(){
clrscr();
sutun=3;
satir=3;
//printf("Satr saysn giriniz :");scanf("%d",&satir);
//printf("Stn saysn giriniz :");scanf("%d",&sutun);
//rasgele();
yaz();
bul(1,1,0);
getch();
}
