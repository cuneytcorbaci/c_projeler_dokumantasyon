#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<STDLIB.H>


int i;
void bin(int a){          /*”z yinelemeli*/
    if (a>1) { i++;
    bin(a/2)	    ;}
    for(int s=i+1;s<4;s++)
    printf("0");
    i=4;
    printf("%i",a%2);

    }
void hextobin(char *b){
  int sayi,uz,j;
  i=0;
  char *s;
  uz=strlen(b);
  for(j=0;j<uz;j++) {

 switch (b[j])
    {
    case '0' : sayi=0;break;
    case '1' : sayi=1;break;
    case '2' : sayi=2;break;
    case '3' : sayi=3;break;
    case '4' : sayi=4;break;
    case '5' : sayi=5;break;
    case '6' : sayi=6;break;
    case '7' : sayi=7;break;
    case '8': sayi=8;break;
    case '9' : sayi=9;break;
    case 'A' : sayi=10;break;
    case 'B' : sayi=11;break;
    case 'C' : sayi=12;break;
    case 'D' : sayi=13;break;
    case 'E' : sayi=14;break;
    case 'F' : sayi=15;break;
      }
      i=0;
   bin(sayi)  ;
 }


 /* if (a>15) hextobin(a/16);
  switch (a)
  {
  case 15:printf("F");break;
  case 14:printf("E");break;
  case 13:printf("D");break;
  case 12:printf("C");break;
  case 11:printf("B");break;
  case 10:printf("A");break;
  default : printf("%i",a%16);

  } */
}

void main(){
 int a,b;
 char* c;
   clrscr();
   hextobin("01");
   i=0;



     // printf("10 luk sayy 2 lik sayya ‡evirir.\nSay=>");scanf("%i",&c);
  // printf("%c=>",&c);hextobin(c);
   getch();

}