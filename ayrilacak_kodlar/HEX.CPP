#include<stdio.h>
#include<conio.h>




void hex(int a){   /*”z yinelemeli*/
  if (a>15) hex(a/16);
  switch (a)
  {
  case 15:printf("F");break;
  case 14:printf("E");break;
  case 13:printf("D");break;
  case 12:printf("C");break;
  case 11:printf("B");break;
  case 10:printf("A");break;
  default : printf("%i",a%16);

  }
}

void main(){
 int a,b,c;
   clrscr();

   printf("10 luk sayy 2 lik sayya ‡evirir.\nSay=>");scanf("%i",&c);
   printf("%i=>",c);hex(c);
   getch();
}