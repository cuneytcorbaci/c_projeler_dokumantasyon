/*1. Bir sayçnçn asal olup olmadçßçnç araütçran programç yazçnçz.*/

#include <stdio.h>
#include <conio.h>
int x,i,asal;


void main(void){
 printf("Bir Sayç Gir: ");
 scanf("%d",&x);
 asal=1;

 for(i=2;i<x/2;i++){
     if((x%i)==0){
       printf("Sayç Asal Deßil!");
       asal=0;
       break;
       }

    }
  if(asal){
    printf("Sayç Asal!");
   }

getch();
}