#include<conio.h>
#include <string.h>
#include<stdlib.h>
char isim[15];
int uz;

void yaz (int index){     /*harfleri tersten yazar */
  char *a;
  int i;
  if (index<uz){

  ++index ;
  yaz(index);
  printf("\n");
  for(i=0;i<index;i++) printf("%c",isim[i]);

  }

}
void tyaz (int index){      /*harfleri arttrarak yazar */
  char *a;
  int i;
  if (index>=0){

  --index ;
  tyaz(index);
  printf("\n");
  for(i=0;i<=index;i++) printf("%c",isim[i]);

  }

}


void main(){
 clrscr();
 printf("Isminizi giriniz:");scanf("%s",&isim);
 uz=strlen(isim);
 tyaz(uz);
 yaz(-1);
getch();


}


