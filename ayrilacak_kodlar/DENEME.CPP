#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
main()
{int i,j,a,b,c;
char *cum[21];
clrscr(); strcpy(*cum,"ALò OKULA GELDò");
gotoxy(5,3);printf("Girilen CÅmle...: %s",*cum);
for (i=0;i<=strlen(*cum);i++)
{
a=strcmp(cum[i],"O"); b=strcmp(cum[i],"D");
if ((a==0)||(b==0))
do {j=i;strcpy(cum[j],"");j++;c=strcmp(cum[j],"G");} while (c!=0);}
}getche();
gotoxy(5,5);printf("Sonuá...........: %s",*cum);
getche();
}
