#include <stdio.h>
#include <conio.h>
main()
{char aylar[12][10]={"Ocak","ubat","Mart","Nisan","Mays","Haziran","Temmuz","A§ustos","Eyll","Ekim","Kasm","Aralk"};
int sat[12],i,enb,enk,k,l;
clrscr();
for (i=0;i<12;i++)
{gotoxy(5,i+2);printf("%s Aynn SatŸ Miktarn Giriniz...: ",aylar[i]);scanf("%d",&sat[i]);}
enb=sat[0];enk=sat[0];k=0;l=0;
for (i=1;i<12;i++)
{
if (sat[i]>enb) {enb=sat[i]; k=i;}
if (sat[i]<enk) {enk=sat[i]; l=i;}
}
gotoxy(5,16);printf("En Yksek SatŸlar %s Aynda YaplmŸtr. SatŸ Miktar = %d",aylar[k],enb);
gotoxy(5,17);printf("En DŸk SatŸlar %s Aynda YaplmŸtr. SatŸ Miktar  = %d",aylar[l],enk);
getche();
}