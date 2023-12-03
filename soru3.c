//Klavyeden girilen 3 sayının aritmetik ortalamasını bulan programı yazın.
#include <stdio.h>
int main() {
    float sayi1, sayi2, sayi3;

    // Kullanıcıdan üç sayıyı alalım
    printf("Birinci sayiyi girin: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%f", &sayi2);

    printf("Üçüncü sayiyi girin: ");
    scanf("%f", &sayi3);

    // Aritmetik ortalamayı hesaplayıp ekrana yazdırın.
    float ortalama = (sayi1 + sayi2 + sayi3) / 3;
    printf("Girilen sayilarin aritmetik ortalamasi: %.2f\n", ortalama);

    return 0;
}