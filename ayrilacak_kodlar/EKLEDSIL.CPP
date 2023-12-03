#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void ekle(void);
void dsekle(void);
void byekle(void);
void sdsekle(void);
void listele(void);
void duzelt(void);
void sil(void);
void iysil(void);
void kysil(void);
char adsoy[100][30],mes[100][30],yer[100][30];
int ks=0;
main()
{int i;
char sec;
do
{
clrscr();
gotoxy(3,3);printf("A N A   M E N š");
gotoxy(3,6) ;printf("[1] - Kayt Ekleme");
gotoxy(3,7) ;printf("[2] - Listeleme");
gotoxy(3,8) ;printf("[3] - Dzeltme");
gotoxy(3,9) ;printf("[4] - Silme");
gotoxy(3,11);printf("[0] - €kŸ");
gotoxy(3,14);printf("Se‡iminiz...");
sec=getche();
switch (sec)
{
case '1' : ekle();break;
case '2' : listele();break;
/*case '3' : duzelt();break;*/
case '4' : sil();break;
case '0' : exit(1);
default  : gotoxy(3,17);printf("Hatal Se‡im Yaptnz..!");getche();
}
}
while(sec!='0');
}

void ekle(void)
{int i;
char sec;
do
{
clrscr();
gotoxy(20,3);printf("KAYIT EKLEME");
gotoxy(20,6) ;printf("[1] - Dizi Sonuna Ekle");
gotoxy(20,7) ;printf("[2] - BoŸ Yerlere Ekle");
gotoxy(20,8) ;printf("[3] - Sral Diziye Sradan Ekle");
gotoxy(20,11);printf("[0] - Ana Men");
gotoxy(20,14);printf("Se‡iminiz...");
sec=getche();
switch (sec)
{
case '1' : dsekle();break;
case '2' : byekle();break;
case '3' : sdsekle();break;
case '0' : break;
default  : gotoxy(20,17);printf("Hatal Se‡im Yaptnz..!");getche();
}
}
while(sec!='0');
}

void dsekle(void)
{int k;
if (ks>100) goto l;
clrscr();
while (ks<5)
{
ks=ks+1;
gotoxy(3,6);clreol();gotoxy(3,7);clreol();
gotoxy(3,5);clreol();printf("%d. KiŸinin Ad - Soyad = ",ks);scanf("%s",&adsoy[ks]);
if ((strcmp(adsoy[ks],"1"))==0) {ks=ks-1; goto k;}
gotoxy(3,6);printf("%d. KiŸinin Mesle§i      = ",ks);scanf("%s",&mes[ks]);
gotoxy(3,7);printf("%d. KiŸinin Do§um Yeri   = ",ks);scanf("%s",&yer[ks]);
}
l:
clrscr();gotoxy(3,10);printf("Dizide BoŸ Yer Kalmad!!! Daha Fazla Veri GiriŸi Yaplamaz!!!");getche();
k:
}

void byekle(void)
{int k,i,l,s=0;
clrscr();
for (i=1;i<=ks+1;i++)
if ((strcmp(adsoy[i],"*"))==0)
{
gotoxy(3,6);clreol();gotoxy(3,7);clreol();
gotoxy(3,5);clreol();printf("%d. KiŸinin Ad - Soyad = ",i);scanf("%s",&adsoy[i]);
if ((strcmp(adsoy[i],"1"))==0) {ks=ks-1; goto k;}
gotoxy(3,6);printf("%d. KiŸinin Mesle§i      = ",i);scanf("%s",&mes[i]);
gotoxy(3,7);printf("%d. KiŸinin Do§um Yeri   = ",i);scanf("%s",&yer[i]);
s=s+1;
}
clrscr();
if (s>0)  {gotoxy(3,10);printf("Dizi ˜‡erisinde BoŸ Yer Kalmad§ndan Bundan Sonraki Eklemeler Dizi Sonuna    Yaplacaktr!!!");getche();}
if (s==0) {gotoxy(3,10);printf("Dizi ˜‡erisinde BoŸ Yer Olmad§ndan Eklemeler Dizi Sonuna Yaplacaktr!!!");getche();}
clrscr();
if (ks>100) goto l;
while (ks<5)
{
ks=ks+1;
gotoxy(3,6);clreol();gotoxy(3,7);clreol();
gotoxy(3,5);clreol();printf("%d. KiŸinin Ad - Soyad = ",ks);scanf("%s",&adsoy[ks]);
if ((strcmp(adsoy[ks],"1"))==0) {ks=ks-1; goto k;}
gotoxy(3,6);printf("%d. KiŸinin Mesle§i      = ",ks);scanf("%s",&mes[ks]);
gotoxy(3,7);printf("%d. KiŸinin Do§um Yeri   = ",ks);scanf("%s",&yer[ks]);
}
l:
clrscr();gotoxy(3,10);printf("Dizide BoŸ Yer Kalmad!!! Daha Fazla Veri GiriŸi Yaplamaz!!!");getche();
k:
}


void sdsekle(void)
{int k,l,i,j;
char t1[30],adsoy1[30],mes1[30],yer1[30];
for (i=1;i<=ks-1;i++)
for (j=1;j<=ks-i;j++)
if ((strcmp(adsoy[j],adsoy[j+1]))>0)
{
strcpy(t1,adsoy[j]);strcpy(adsoy[j],adsoy[j+1]);strcpy(adsoy[j+1],t1);
strcpy(t1,mes[j]);strcpy(mes[j],mes[j+1]);strcpy(mes[j+1],t1);
strcpy(t1,yer[j]);strcpy(yer[j],yer[j+1]);strcpy(yer[j+1],t1);
}
if (ks>100) goto l;
clrscr();
while (ks<5)
{
ks=ks+1;
gotoxy(3,6);clreol();gotoxy(3,7);clreol();
gotoxy(3,5);clreol();printf("%d. KiŸinin Ad - Soyad = ",ks);scanf("%s",&adsoy1);
if ((strcmp(adsoy1,"1"))==0) {ks=ks-1; goto k;}
gotoxy(3,6);printf("%d. KiŸinin Mesle§i      = ",ks);scanf("%s",&mes1);
gotoxy(3,7);printf("%d. KiŸinin Do§um Yeri   = ",ks);scanf("%s",&yer1);
for (i=1;i<=ks;i++)
{
if ((strcmp(adsoy1,adsoy[i]))<0)
{
for (j=ks;j>=i;j--)
{
strcpy(adsoy[j+1],adsoy[j]);
strcpy(mes[j+1],mes[j]);
strcpy(yer[j+1],yer[j]);
}
strcpy(adsoy[i],adsoy1);strcpy(mes[i],mes1);strcpy(yer[i],yer1);
break;
}
if ((strcmp(adsoy1,adsoy[ks-1]))>0)
{
strcpy(adsoy[ks],adsoy1);strcpy(mes[ks],mes1);strcpy(yer[ks],yer1);
}
}
}
l:
clrscr();gotoxy(3,10);printf("Dizide BoŸ Yer Kalmad!!! Daha Fazla Veri GiriŸi Yaplamaz!!!");getche();
k:
}


void listele(void)
{int i;
clrscr();
gotoxy(5,2);printf("º   A D  -  S O Y A D      º   M E S L E K     º   D O ¦ U M  Y E R ˜  º");
gotoxy(5,3);printf("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
for (i=1;i<=ks;i++)
{
gotoxy(8,i+3);printf("%s",adsoy[i]);
gotoxy(35,i+3);printf("%s",mes[i]);
gotoxy(55,i+3);printf("%s",yer[i]);
gotoxy(5,i+3);printf("º");gotoxy(32,i+3);printf("º");
gotoxy(52,i+3);printf("º");gotoxy(76,i+3);printf("º");
}
gotoxy(5,i+3);printf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
getche();
}

void sil(void)
{int i;
char sec;
do
{
clrscr();
gotoxy(20,3);printf("KAYIT S˜LME");
gotoxy(20,6) ;printf("[1] - ˜Ÿaretleme Y”ntemi ˜le Sil");
gotoxy(20,7) ;printf("[2] - Kaydrma Y”ntemi ˜le Sil");
gotoxy(20,10);printf("[0] - Ana Men");
gotoxy(20,13);printf("Se‡iminiz...");
sec=getche();
switch (sec)
{
case '1' : iysil();break;
/*case '2' : kysil();    yaz();break;*/
case '0' : break;
default  : gotoxy(20,16);printf("Hatal Se‡im Yaptnz..!");getche();
}
}
while(sec!='0');
}

void iysil(void)
{int i,bulundu=0;
char adsoy1[30];
clrscr();
gotoxy(3,5);printf("Silinecek Kaydn Ad - Soyad = ");scanf("%s",&adsoy1);
for (i=1;i<=ks;i++)
{
if ((strcmp(adsoy[i],adsoy1))==0)
{
strcpy(adsoy[i],"*");strcpy(mes[i],"*");strcpy(yer[i],"*");
bulundu=1;clrscr();gotoxy(3,10);printf("Girilen ˜simdeki Kayt BaŸaryla Silindi..!");getche();
}
}
if (bulundu!=1)
{
clrscr();gotoxy(3,10);printf("Girilen ˜simdeki Kayt Dizide Bulunamad!!!");getche();
}
}