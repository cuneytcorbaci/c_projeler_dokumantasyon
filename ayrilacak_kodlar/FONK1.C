#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sample(int a)
{
printf("�u anda %d girilen say�s� fonksiyonun i�inde");
printf("%d girilen say�n�n fonksiyonda karesi al�nd�");
return a*a;

}
int sayi;

main(void){
clrscr();
printf("�u anda ana programdas�n�z ");
printf("Bir say� giriniz :"); scanf("%d",&sayi);
printf("�u anda fonksiyona gidiliyor");
sample(sayi);
printf("fonksiyondand�n�ld�");
getch();
}