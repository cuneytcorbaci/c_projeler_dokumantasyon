/* girilen sayçnçn tam sayç olup olmadçßçnç kontrol eder   */
//AyüegÅl Uáar
#include <stdio.h>
#include <conio.h>
#define sil clrscr()
int sayi,i;
main()


{sil;
sayi=0;
char durum;
 printf("Bir Tam Sayi Giriniz  :");scanf("%d",&sayi);
 for(i=2;i<sayi;i++){
 if (sayi%i ==0 ){durum=1; break;}

 }
 if (durum==1) printf("%d Sayisç asal sayç deßildir. ",sayi);
     else  printf("%d Sayisç asal sayçdçr. ",sayi);
getch();
}