/* girilen say�n�n tam say� olup olmad���n� kontrol eder   */
//Ay�eg�l U�ar
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
 if (durum==1) printf("%d Sayis� asal say� de�ildir. ",sayi);
     else  printf("%d Sayis� asal say�d�r. ",sayi);
getch();
}