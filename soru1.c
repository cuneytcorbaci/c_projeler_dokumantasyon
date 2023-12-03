//Kullanıcıdan alınan isim ve soyisim bilgisini ekrana yazdıran programı yazın.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char isim[50],soyisim[50];

    //Kullanıcıdan isim bilgisini alalım
    printf("İsminizi Yaziniz: ");
    scanf("%s",isim);
    
    //Kullanıcıdan soyisim bilgisini alalım
    printf("Soyisminizi Yaziniz: ");
    scanf("%s",soyisim);

    //Alınan isim ve soyisim bilgisini ekrana yazdıralım
    printf("Girilen isim: %s\n", isim);
    printf("Girilen soyisim: %s\n", soyisim);

    return 0;
}
