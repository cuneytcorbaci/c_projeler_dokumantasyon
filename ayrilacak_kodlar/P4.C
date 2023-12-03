#include<stdio.h>
#include<conio.h>

int  *gonderenk (int a[],int n)
{
int enk,*p,i;
enk=a[0];
p=&a[0];
for (i=0;i<n;i++)
if (a[i]<enk){
 enk=a[i];
 p=&a[i];

}
return p;

}


main()
{

int dizi[]={30,22,23,20,34,11,19};
int *q;
clrscr();
q=* gonderenk(dizi,7);
printf("en kucuk eleman =%d",*q);
getch();
}
malloc       rand



