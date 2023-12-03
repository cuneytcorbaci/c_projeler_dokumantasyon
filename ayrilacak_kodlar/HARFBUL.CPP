#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include<ctype.h>
#define DOGRU 1
#define YANLIS 0
main()
{
  int tamam,i,tut;
  clrscr();
  printf("\n%46s\n","HARF BULMA OYUNU");
  printf("Sadece 6 hakkçnçz var\n");
  srand(time(NULL));
  do{
    clrscr();
    tut='a'+rand()%26;
    for (i=1;i<=6;i++)
    {  fflush(stdin);
       if(getchar()==tut)
	 {printf("\nTebrikler buldunuz\n");break;}
       else {printf("\nYuh sana bulamadçn\n");tamam=DOGRU;}
    }

    if(tamam) printf("\nHarf %c idi\n",tut);
    printf("\nTekrar(E/H):");
    fflush(stdin);
    }while(toupper(getchar())=='E');
}
