#include<conio.h>
#include <string.h>
#include<stdlib.h>
char isim[15];
int uz;

void yaz (int index){
  char *a;
  int i;
  if (index>=0){

  --index ;
  yaz(index);
  printf("\n");
  for(i=0;i<=index;i++) printf("%c",isim[i]);

  }

}

void main(){
 clrscr();
 printf("Isminizi giriniz:");scanf("%s",&isim);
 uz=strlen(isim);
 yaz(uz);
getch();


}


