#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void ssort(void);
void bsort(void);
void shellsort(void);
void qksort(int,int);
void yaz(void);
char adsoy[100][30],yer[100][30];
int dtah[100];
int n;
main()
{int i,sol,sag;
char sec;
clrscr();
gotoxy(3,2);printf("Girilecek Kayçt Sayçsç = ");scanf("%d",&n);
for (i=1;i<=n;i++)
{
gotoxy(3,6);clreol();gotoxy(3,7);clreol();
gotoxy(3,5);clreol();printf("%d. Kiüinin Adç - Soyadç = ",i);scanf("%s",&adsoy[i]);
gotoxy(3,6);printf("%d. Kiüinin Doßum Yeri   = ",i);scanf("%s",&yer[i]);
gotoxy(3,7);printf("%d. Kiüinin Doßum Tarihi = ",i);scanf("%d",&dtah[i]);
}
do
{
clrscr();
gotoxy(3,5) ;printf("[1] - Selection Sort Yîntemi òle Sçrala");
gotoxy(3,6) ;printf("[2] - Bubble Sort Yîntemi òle Sçarla");
gotoxy(3,7) ;printf("[3] - Shell Sort Yîntemi òle Sçrala");
gotoxy(3,8) ;printf("[4] - Quick Sort Yîntemi òle Sçrala");
gotoxy(3,10);printf("[0] - Äçkçü");
gotoxy(3,13);printf("Seáiminiz...");
sec=getche();
switch (sec)
{
case '1' : ssort();    yaz();break;
case '2' : bsort();    yaz();break;
case '3' : shellsort();yaz();break;
case '4' : sol=1;sag=n;qksort(sol,sag);yaz();break;
case '0' : exit(1);
default  : gotoxy(3,16);printf("Hatalç Seáim Yaptçnçz..!");getche();
}
}
while(sec!='0');
}


void ssort(void)
{int i,j,t2,m;
char t1[30];
for (i=1;i<=n-1;i++)
{m=i;
for (j=i+1;j<=n;j++)
if ((strcmp(adsoy[m],adsoy[j]))>0) m=j;
strcpy(t1,adsoy[i]);strcpy(adsoy[i],adsoy[m]);strcpy(adsoy[m],t1);
strcpy(t1,yer[i]);strcpy(yer[i],yer[m]);strcpy(yer[m],t1);
t2=dtah[i];dtah[i]=dtah[m];dtah[m]=t2;
}
}

void bsort(void)
{int i,j,t2;
char t1[30];
for (i=1;i<=n-1;i++)
for (j=1;j<=n-i;j++)
if ((strcmp(adsoy[j],adsoy[j+1]))>0)
{
strcpy(t1,adsoy[j]);strcpy(adsoy[j],adsoy[j+1]);strcpy(adsoy[j+1],t1);
strcpy(t1,yer[j]);strcpy(yer[j],yer[j+1]);strcpy(yer[j+1],t1);
t2=dtah[j];dtah[j]=dtah[j+1];dtah[j+1]=t2;
}
}

void shellsort(void)
{int i,j,orta,t2,k;
char t1[30];
orta=floor(n/2);
while (orta>0)
{
for (i=orta+1;i<=n;i++)
{
j=(i-orta);
while (j>0)
{
k=orta+j;
if ((strcmp(adsoy[j],adsoy[k]))>0)
{
strcpy(t1,adsoy[j]);strcpy(adsoy[j],adsoy[k]);strcpy(adsoy[k],t1);
strcpy(t1,yer[j]);strcpy(yer[j],yer[k]);strcpy(yer[k],t1);
t2=dtah[j];dtah[j]=dtah[k];dtah[k]=t2;
j=j-orta;
}
else
j=0;
}
}
orta=floor(orta/2);
}
}

void qksort(int sol,int sag)
{int ilk,son,orta,t2;
char t1[30];
ilk=sol;
son=sag;
orta=floor((sol+sag)/2);
do
{
while (((strcmp(adsoy[ilk],adsoy[orta]))<0) && (ilk<sag)) ilk=ilk+1;
while (((strcmp(adsoy[son],adsoy[orta]))>0) && (son>sol)) son=son-1;
if (ilk<=son)
{
strcpy(t1,adsoy[ilk]);strcpy(adsoy[ilk],adsoy[son]);strcpy(adsoy[son],t1);
strcpy(t1,yer[ilk]);strcpy(yer[ilk],yer[son]);strcpy(yer[son],t1);
t2=dtah[ilk];dtah[ilk]=dtah[son];dtah[son]=t2;
ilk=ilk+1; son=son-1;
}
} while(ilk<=son);
if (sol<son) qksort(sol,son);
if (ilk<sag) qksort(ilk,sag);
}

void yaz(void)
{int i;
clrscr();
gotoxy(5,2);printf("∫   A D  -  S O Y A D      ∫  D O ¶ U M   Y E R ò  ∫  D.  T A R ò H ò  ∫");
gotoxy(5,3);printf("ÃÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕπ");
for (i=1;i<=n;i++)
{
gotoxy(8,i+3);printf("%s",adsoy[i]);
gotoxy(35,i+3);printf("%s",yer[i]);
gotoxy(59,i+3);printf("%d",dtah[i]);
gotoxy(5,i+3);printf("∫");gotoxy(32,i+3);printf("∫");
gotoxy(56,i+3);printf("∫");gotoxy(76,i+3);printf("∫");
}
gotoxy(5,i+3);printf("»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕ ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº");
getche();
}
