#include <stdio.h>
#include <conio.h>
main()
{int s1,s2,s3,t;
clrscr();
gotoxy(5,3);printf("Birinci Sayy Giriniz = ");scanf("%d",&s1);
gotoxy(5,4);printf("˜kinci Sayy Giriniz  = ");scanf("%d",&s2);
gotoxy(5,5);printf("š‡nc Sayy Giriniz  = ");scanf("%d",&s3);
clrscr();
if (s1>s2)
{t=s1;s1=s2;s2=t;}
if (s1>s3)
{t=s1;s1=s3;s3=t;}
if (s2>s3)
{t=s2;s2=s3;s3=t;}
gotoxy(5,10);printf("Saylarn K‡kten By§e SralnŸ...: %d < %d < %d",s1,s2,s3);
getche();
}