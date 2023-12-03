#include <stdio.h>
#include <conio.h>
main()
{int vize,final,but;
float sonuc,sonuc2;
clrscr();
gotoxy(5,3);printf("Vize Notunuzu Giriniz  = ");scanf("%d",&vize);
gotoxy(5,4);printf("Final Notunuzu Giriniz = ");scanf("%d",&final);
sonuc=vize*0.4+final*0.6;
if (sonuc<59.5)
{gotoxy(5,7);printf("Btnleme Notunuzu Giriniz = ");scanf("%d",&but);
sonuc2=sonuc*0.5+but*0.5;
 if (sonuc2<59.5)
 {gotoxy(5,10);printf("Kaldnz!!! Dersi Tekrar Almanz Gerekiyor. Not Ortalamanz = %2.2f",sonuc2);}
 else
 {gotoxy(5,10);printf("Tebrikler..! Dersten Ge‡tiniz. Not Ortalamanz = %2.2f",sonuc2);}
}
else
{gotoxy(5,10);printf("Tebrikler..! Dersten Ge‡tiniz. Not Ortalamanz = %2.2f",sonuc);}
getche();
}