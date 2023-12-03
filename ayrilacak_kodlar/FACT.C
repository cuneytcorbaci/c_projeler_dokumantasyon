#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
scanf("%d",&n);
printf("%d",fact(n));
getch();
}
int fact(x)
{
if ((x<1) || (x==1)) return 1;
   else return (x*fact(x-1));
}