#include <stdio.h>
#include <conio.h>
#include <math.h>
#define sil clrscr()
#define yaz printf
#define oku scanf

float karekok(float sayi)
{
float i;
float kok;
sil;
for(i=0.001;i<=sayi;i=i+0.001)
  {
  kok=i*i;
  if (kok==sayi) break;
  else if(kok>sayi) break;
  }
  return i;
}

void main()
{
float sayi;
sil;
yaz("Say�y� giriniz =");
oku("%f",&sayi);
printf("Bu say�n�n karek�k� = %f",karekok(sayi));

getch();
}