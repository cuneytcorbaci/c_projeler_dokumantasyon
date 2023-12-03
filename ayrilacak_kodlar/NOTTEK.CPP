#include <stdio.h>
#include <conio.h>
main()
{int i,j,k,n,s,ogr[1500];
clrscr();
gotoxy(5,3);printf("Notu Girilecek ôßrenci Sayçsçnç Giriniz...: ");scanf("%d",&n);
for(j=1;j<=n;j++)
{gotoxy(5,5);clreol();printf("%d . ôßrencinin Notu...: ",j);scanf("%d",&ogr[j]);}
s=4;k=0;gotoxy(5,5);clreol();
for(i=0;i<=100;i++)
{
for(j=1;j<=n;j++) {if (ogr[j]==i) k=k+1;}
if (k>0)
{
gotoxy(5,s+1);printf("%d Alan ôßrencilerin Sayçsç...= %d",i,k);
s=s+1;
}
k=0;
}
getche();
}