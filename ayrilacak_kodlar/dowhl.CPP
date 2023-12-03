/*2. ûifre programç yazçnçz.*/
#include <stdio.h>
#include <conio.h>
int i,deg;
char *s,*sifre="a";


void main(void){

 clrscr();
 deg=0;
 do{
  printf("ûifreyi Gir: ");
  scanf("%s",s);
  i++;

  if (*s==*sifre){
    printf("ûifreyi Doßru Girdiniz!\n ");
    deg=1;
    break;
  }else{
    if (i==3){
      break;
      }
    printf("ûifreyi Yanlçü Girdiniz! ");
     }

 }while((1)||(deg==1));

    if (i==3){
      printf("ûifreyi öá Defa Yanlçü Girdiniz Program Sonlanacak!");
     }
 getch();
}