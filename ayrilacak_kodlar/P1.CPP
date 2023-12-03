#include<stdio.h>
#include<conio.h>
main()
{
 char a[10]="veli";
 char *p,*q;
 p=a;
 q=&a[0];
 printf("%\n",*q);
 printf("%c\n",*p);
 printf("%c\n",*(p+1));
 printf("%u\n",p);
 printf("%p\n",p+2);
 getch();

 clrscr();




}



