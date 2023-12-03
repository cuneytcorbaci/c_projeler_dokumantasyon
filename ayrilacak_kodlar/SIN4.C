#include<stdio.h>
#include<conio.h>
int sayi;
char i,n,p;
main()
{
int top1,top2;
float ort1,ort2;
top1=0,top2=0;
ort1=0.0,ort2=0.0;
clrscr();
while(i<5)
{
printf("bir sayi giriniz...\sayi");
scanf("%i",&sayi);
 if (sayi==0) continue;
   if (sayi<0)
   { top1=top1+sayi;
     n++;}
     else
   { top2=top2+sayi;
     p++;}
i++;
}
ort1=top1/n;
ort2=top2/p;
printf("negatif sayilarin ortalamasi....:%3.2f",ort1);
printf("pozitif sayilarin ortalamasi....:%3.2f",ort2);
return(0);
}


