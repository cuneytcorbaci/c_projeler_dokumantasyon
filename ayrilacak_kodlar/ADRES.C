//adresleri g”steren program

#include <stdio.h>

int main( void )
{
  int  dizi[] = { 38, 34, 88, 11, 22 },
      *adres,
      x1;

  adres = dizi;
  printf("Adresin adresi: %X\n", adres);
  printf("Adresdeki de§er %d\n", *adres);

  x1 = 3;
  adres += x1;

  printf("Adresin adresi: %X\n", adres);
  printf("Adresin yeni de§eri %d \n", *adres);

  return (0);
}
