#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void solmd(void);
void solds(void);
void soldi(void);
char ad[100][20],soy[100][20];
long int no[100];
int n;
main()
{int i;
char sec;
clrscr();
gotoxy(3,2);printf("Girilecek Kay�t Say�s� = ");scanf("%d",&n);
for (i=1;i<=n;i++)
{
gotoxy(3,6);clreol();gotoxy(3,7);clreol();
gotoxy(3,5);clreol();printf("%d. Ki�inin Ad�      = ",i);scanf("%s",&ad[i]);
gotoxy(3,6);printf("%d. Ki�inin Soyad�   = ",i);scanf("%s",&soy[i]);
gotoxy(3,7);printf("%d. Ki�inin Numaras� = ",i);scanf("%ld",&no[i]);
}
do
{
clrscr();
gotoxy(3,5);printf("[1] - S�ral� Olmayan Dizide Ara ");
gotoxy(3,6);printf("[2] - S�ral� Dizide S�radan Ara ");
gotoxy(3,7);printf("[3] - S�ral� Dizide �kili Ara ");
gotoxy(3,9);printf("[0] - ��k�� ");
gotoxy(3,12);printf("Se�iminiz...");
sec=getche();
switch (sec)
{
case '1' : solmd();break;
case '2' : solds();break;
case '3' : soldi();break;
case '0' : exit(1);
default  : gotoxy(3,15);printf("Hatal� Se�im Yapt�n�z..!");getche();
}
}
while(sec!='0');
}


void solmd(void)
{int i;
char ad1[20],sec;
clrscr();
gotoxy(3,5);printf("Aranacak Kay�d�n Ad� : ");scanf("%s",&ad1);
for (i=1;i<=n;i++)
{
if ((strcmp(ad1,ad[i]))==0)
{
gotoxy(3,8) ;clreol();printf("Ad.............: %s",ad[i]);
gotoxy(3,9) ;printf("Soyad..........: %s",soy[i]);
gotoxy(3,10);printf("Numara.........: %ld",no[i]);
gotoxy(3,12);printf("Kay�t S�ras�...: %d",i);
break;
}
else
{
gotoxy(3,8);printf("Arad���n�z Kay�t Bulunamad�..!");
}
}
getche();
}


void solds(void)
{int i,j; long int t2;
char ad1[20],sec,t1[20];
for (i=1;i<=n-1;i++)
for (j=i+1;j<=n;j++)
if ((strcmp(ad[i],ad[j]))>0)
{
strcpy(t1,ad[i]);strcpy(ad[i],ad[j]);strcpy(ad[j],t1);
strcpy(t1,soy[i]);strcpy(soy[i],soy[j]);strcpy(soy[j],t1);
t2=no[i];no[i]=no[j];no[j]=t2;
}
clrscr();
gotoxy(3,5);printf("Aranacak Kay�d�n Ad� : ");scanf("%s",&ad1);
for (i=1;i<=n;i++)
{
if ((strcmp(ad1,ad[i]))==0)
{
gotoxy(3,8) ;clreol();printf("Ad.............: %s",ad[i]);
gotoxy(3,9) ;printf("Soyad..........: %s",soy[i]);
gotoxy(3,10);printf("Numara.........: %ld",no[i]);
gotoxy(3,12);printf("Kay�t S�ras�...: %d",i);
break;
}
else if ((strcmp(ad1,ad[i]))<0)
{
gotoxy(3,8);printf("Arad���n�z Kay�t Bulunamad�..!");break;
}
}
getche();
}


void soldi(void)
{int i,j,ilk,son,orta;
long int t2;
char ad1[20],sec,t1[20];
for (i=1;i<=n-1;i++)
for (j=i+1;j<=n;j++)
if ((strcmp(ad[i],ad[j]))>0)
{
strcpy(t1,ad[i]);strcpy(ad[i],ad[j]);strcpy(ad[j],t1);
strcpy(t1,soy[i]);strcpy(soy[i],soy[j]);strcpy(soy[j],t1);
t2=no[i];no[i]=no[j];no[j]=t2;
}
clrscr();
gotoxy(3,5);printf("Aranacak Kay�d�n Ad� : ");scanf("%s",&ad1);
ilk=1;
son=n;
while(ilk<=son)
{
orta=ceil((son+ilk)/2);
if ((strcmp(ad1,ad[orta]))==0)
{
gotoxy(3,8) ;clreol();printf("Ad.............: %s",ad[orta]);
gotoxy(3,9) ;printf("Soyad..........: %s",soy[orta]);
gotoxy(3,10);printf("Numara.........: %ld",no[orta]);
gotoxy(3,12);printf("Kay�t S�ras�...: %d",orta);
break;
}
else if ((strcmp(ad1,ad[orta]))<0) son=orta-1;
else if ((strcmp(ad1,ad[orta]))>0) ilk=orta+1;
}
if (ilk>son)
{
gotoxy(3,8);printf("Arad���n�z Kay�t Bulunamad�..!");
}
getche();
}
