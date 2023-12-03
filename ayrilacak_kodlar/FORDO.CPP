/****************************************************************************
 * Program: For-Do                                                          *
 *									    *
 * žaban žahin Akman    97030033240                                         *
 * Bilgisayar           4/A                                                 *
 *									    *
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
 int i,say;
   clrscr();
   printf("Saynn tam b”lenlerini bulur.\nSay=>");
   scanf("%i",&say);
   for (i=1;i<=say;i++)if(say%i==0)printf("[%6i]",i);
}
