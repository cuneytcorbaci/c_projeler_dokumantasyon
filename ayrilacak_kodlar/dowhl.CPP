/*2. �ifre program� yaz�n�z.*/
#include <stdio.h>
#include <conio.h>
int i,deg;
char *s,*sifre="a";


void main(void){

 clrscr();
 deg=0;
 do{
  printf("�ifreyi Gir: ");
  scanf("%s",s);
  i++;

  if (*s==*sifre){
    printf("�ifreyi Do�ru Girdiniz!\n ");
    deg=1;
    break;
  }else{
    if (i==3){
      break;
      }
    printf("�ifreyi Yanl�� Girdiniz! ");
     }

 }while((1)||(deg==1));

    if (i==3){
      printf("�ifreyi �� Defa Yanl�� Girdiniz Program Sonlanacak!");
     }
 getch();
}