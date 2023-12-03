#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{int n,k,ct,tt;
clrscr();
gotoxy(5,3);printf("Bir N Sayçsç Giriniz = ");scanf("%d",&n);
k=1;ct=0;tt=0;
L:
k=k+1;
if (k<n)
{
if ((k%2)==0)
{ct=ct+k; goto L;}
else
{tt=tt+k; goto L;}
}
gotoxy(5,8);printf("1 òle %d",n);printf(" Arasçndaki Tek Sayçlarçn Toplamç  = %d",tt);
gotoxy(5,10);printf("1 òle %d",n);printf(" Arasçndaki Äift Sayçlarçn Toplamç = %d",ct);
getche();
}