//Klavyeden girilen 2 sayının toplamını veren programı yazalım

#include <stdio.h>

int main() {
    int sayi1, sayi2;

    // Kullanıcıdan iki sayıyı alalım.
    printf("Birinci sayiyi girin: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", &sayi2);

    // Toplamı hesaplayıp ekrana yazdıralım.
    int toplam = sayi1 + sayi2;
    printf("Girilen sayilarin toplami: %d\n", toplam);

    return 0;
}
