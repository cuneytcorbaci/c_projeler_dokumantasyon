#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
main()
{
 int sayi,top,i;
 clrscr();
 printf("Sayç:");scanf("%d",&sayi);
 i=1;
 top=0;
 do 
 {
 top+=i;
 i+=2;
 } 
 while (i<=sayi);


printf("Toplam:%d",top);
getch();
}