#include <stdio.h>
#include <conio.h>
main()
{long int i,n,maas[100],top;
float ort;
clrscr();top=0;
gotoxy(5,3);printf("��yerindeki �al��an Say�s�n� Giriniz...: ");scanf("%ld",&n);
for (i=1;i<=n;i++)
{
gotoxy(5,5);clreol();printf("%ld . �al��an�n Net Maa�� = ",i);scanf("%ld",&maas[i]);
top=top+maas[i];
}
ort=top/n;
gotoxy(5,5);clreol();printf("�al��anlar�n Ortalama Maa�� = %10.2f",ort);
for (i=1;i<=n;i++)
{
gotoxy(5,i+6);printf("%ld . �al��an�n Net Maa��n�n Ortalama Maa�tan Fark� = %10.2f",i,(maas[i]-ort));
}
getche();
}