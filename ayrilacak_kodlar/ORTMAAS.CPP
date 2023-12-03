#include <stdio.h>
#include <conio.h>
main()
{long int i,n,maas[100],top;
float ort;
clrscr();top=0;
gotoxy(5,3);printf("òüyerindeki Äalçüan Sayçsçnç Giriniz...: ");scanf("%ld",&n);
for (i=1;i<=n;i++)
{
gotoxy(5,5);clreol();printf("%ld . Äalçüançn Net Maaüç = ",i);scanf("%ld",&maas[i]);
top=top+maas[i];
}
ort=top/n;
gotoxy(5,5);clreol();printf("Äalçüanlarçn Ortalama Maaüç = %10.2f",ort);
for (i=1;i<=n;i++)
{
gotoxy(5,i+6);printf("%ld . Äalçüançn Net Maaüçnçn Ortalama Maaütan Farkç = %10.2f",i,(maas[i]-ort));
}
getche();
}