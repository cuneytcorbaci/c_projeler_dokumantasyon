/*3. D��ar�dan girilen n tane say�n�n ortalamas�n� bulan program� yaz�n�z.*/

#include <stdio.h>
#include <conio.h>

int i,n,sayi,top;
float ort;

void main(void){

  printf("N Say�s�n� Gir: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    printf("Say� Gir: ");
    scanf("%d",&sayi);
    top+=sayi;
   }

    ort=top/n;


  printf("%10.2f",ort);
  getch();
}