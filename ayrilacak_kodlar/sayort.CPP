/*3. Dçüarçdan girilen n tane sayçnçn ortalamasçnç bulan programç yazçnçz.*/

#include <stdio.h>
#include <conio.h>

int i,n,sayi,top;
float ort;

void main(void){

  printf("N Sayçsçnç Gir: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    printf("Sayç Gir: ");
    scanf("%d",&sayi);
    top+=sayi;
   }

    ort=top/n;


  printf("%10.2f",ort);
  getch();
}