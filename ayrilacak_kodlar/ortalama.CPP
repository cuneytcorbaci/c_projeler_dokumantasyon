/*6. N elemanl� bir dizinin elemanlar�n�n ortalamadan b�y�k elemanlar�n�
ekrana yazan program� yaz�n�z.*/
/*7. N elemanl� bir dizinin elemanlar�n�n ortalamadan k���k
elemanlar�n� ekrana yazan program� yaz�n�z.*/



#include <stdio.h>
#include <conio.h>

int dizi[6],i,sayi,top;
float ort;

void main(void){

   clrscr();

  for(i=0;i<6;i++){
      printf("%d. Dizi Eleman�n� Gir :",i+1);
      scanf("%d",&dizi[i]);
      top+=dizi[i];
   }
  ort=top/(i+1);

 for(i=0;i<6;i++){
     if (dizi[i]>ort){
	printf("Ortalamadan B�y�k Dizi Eleman� :%d\n",dizi[i]);

     }else if (dizi[i]<ort)
	printf("Ortalamadan K���k Dizi Eleman� :%d\n",dizi[i]);
       }
   }
 getch();

}