/*6. N elemanlç bir dizinin elemanlarçnçn ortalamadan bÅyÅk elemanlarçnç
ekrana yazan programç yazçnçz.*/
/*7. N elemanlç bir dizinin elemanlarçnçn ortalamadan kÅáÅk
elemanlarçnç ekrana yazan programç yazçnçz.*/



#include <stdio.h>
#include <conio.h>

int dizi[6],i,sayi,top;
float ort;

void main(void){

   clrscr();

  for(i=0;i<6;i++){
      printf("%d. Dizi Elemançnç Gir :",i+1);
      scanf("%d",&dizi[i]);
      top+=dizi[i];
   }
  ort=top/(i+1);

 for(i=0;i<6;i++){
     if (dizi[i]>ort){
	printf("Ortalamadan BÅyÅk Dizi Elemanç :%d\n",dizi[i]);

     }else if (dizi[i]<ort)
	printf("Ortalamadan KÅáÅk Dizi Elemanç :%d\n",dizi[i]);
       }
   }
 getch();

}