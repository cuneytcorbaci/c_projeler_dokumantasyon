/*1. Bir say�n�n asal olup olmad���n� ara�t�ran program� yaz�n�z.*/

#include <stdio.h>
#include <conio.h>
int x,i,asal;


void main(void){
 printf("Bir Say� Gir: ");
 scanf("%d",&x);
 asal=1;

 for(i=2;i<x/2;i++){
     if((x%i)==0){
       printf("Say� Asal De�il!");
       asal=0;
       break;
       }

    }
  if(asal){
    printf("Say� Asal!");
   }

getch();
}