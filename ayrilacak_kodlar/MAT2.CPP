#include <conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int satir=4,sutun=4,a;
int  matris[5][5]={1,0,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0,1};


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
    if ((matris[1][1]==1) && (matris[satir][sutun]==1)){

	if (sut<sutun){
	deger=1;
	sut++;
	bul(sat,sut,deger);
	} else deger=-1;
	printf("(%d,%d)",sat,sut--);
	}
	}

    if (deger>0 ){
	if (deger==1) {
	   if (matris[sat][sut]==1 ){
		if (sut<sutun){
		sut++;
		bul(sat,sut,deger);}
		else deger=-1;
		printf("(%d,%d)",sat,--sut);

	   }  else {

	       if (sat<satir){
		deger=2;
	       sat++;
	       sut--;
	       bul(sat,sut,deger);}
	       else deger=-1;
	       }

	}
	if (deger==2) {
	   if (matris[sat][sut]==1){
	      if (sut<sutun){
	      deger=1;
	      sut++;
	      bul(sat,sut,deger);
	      } else deger=-1;
	      printf("(%d,%d)",sat,--sut);

	   }
	} else {
	       deger=-1;
	       }





    }






}


void main(){
clrscr();
sutun=4;
satir=4;
//printf("Satr saysn giriniz :");scanf("%d",&satir);
//printf("Stn saysn giriniz :");scanf("%d",&sutun);
//rasgele();
yaz();
bul(1,1,0);
getch();
}
