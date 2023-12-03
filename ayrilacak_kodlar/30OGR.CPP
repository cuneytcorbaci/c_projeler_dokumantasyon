#include <string.h>
#include <stdio.h>
#include <conio.h>
main()
{
 int i,j;
 clrscr();
char *isim[30];
char *t;
for(i=1;i<=30;i++) {

   printf("™§rencinin Adi :");scanf("%s",*isim[i]);

 }
for(i=1;i<=29;i++) {
  for(j=i+1;j<=30;j++) {

   if (strcmp(isim[i],isim[j])< 0) {
     t=isim[i];
     isim[i]=isim[j];
     isim[j]=t;
   }

 }
}
for(i=1;i<=30;i++) {

printf("%s \n",isim[i]);
}
getch();
}

