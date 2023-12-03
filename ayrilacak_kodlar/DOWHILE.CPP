/****************************************************************************
 * Program: Do-While                                                        *
 *									    *
 * žaban žahin Akman    97030033240                                         *
 * Bilgisayar           4/A                                                 *
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
 int i=1,top=0,n;
   clrscr();
   printf("1..n aras ‡ift saylarn toplamn bulur.\nBir say girin=>");
   scanf("%i",&n);
   do{
     if (i%2==0) top+=i;
     i++;
   }while (i<=n);
   printf("Toplam=>%i\n",top);
   i=1;top=0;
   while (i++<=n) if (i%2==0) top+=i;
   printf("Toplam=>%i",top);
   getch();
}