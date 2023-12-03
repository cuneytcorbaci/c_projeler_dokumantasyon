//BU PROGRAM YANYANA GòRòLEN DE¶ERLERò òûLEM SIRASINA GôRE YAPAR.
//ONUR ULUSOY 97030034240

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,cevap=0;
char islem;
clrscr();
printf("Sayçyç giriniz:");
scanf("%i",&a);
printf("òülemi giriniz:");
scanf("%s",&islem);
do {
printf("Sayçyç giriniz:");
scanf("%i",&b);

switch(islem)
{
     case'+': { (a=a+b); break;}
     case'-': { (a=a-b); break;}
     case'*': { (a=a*b); break;}
     case'/': { (a=a/b); break;}
} printf("òülemi giriniz:");
scanf("%s",&islem);
}
while (islem!='=');
printf("Cevap = %i  dir",a);
getch();
}