//BU PROGRAM YANYANA G�R�LEN DE�ERLER� ��LEM SIRASINA G�RE YAPAR.
//ONUR ULUSOY 97030034240

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,cevap=0;
char islem;
clrscr();
printf("Say�y� giriniz:");
scanf("%i",&a);
printf("��lemi giriniz:");
scanf("%s",&islem);
do {
printf("Say�y� giriniz:");
scanf("%i",&b);

switch(islem)
{
     case'+': { (a=a+b); break;}
     case'-': { (a=a-b); break;}
     case'*': { (a=a*b); break;}
     case'/': { (a=a/b); break;}
} printf("��lemi giriniz:");
scanf("%s",&islem);
}
while (islem!='=');
printf("Cevap = %i  dir",a);
getch();
}