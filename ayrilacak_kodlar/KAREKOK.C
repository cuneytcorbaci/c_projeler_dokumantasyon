#include<stdio.h>
main()
{unsigned int i,don,a,sayi,say,d,kk,kat;
clrscr();
printf("sayiyi girin (1-99) ");
scanf("%d",&sayi);say=sayi;a=9;
if(sayi<10) a=3;
i=a;
while((i>0)&&(sayi<(i*i))){
	--i;}
kk=i;d=kk;don=1;kat=1;
while(don<=2)
	{
	kat=kat*10;
	sayi=(sayi-d)*100;i=9;d=(kk*20+i)*i;
	while((i>0)&&(sayi<d)){
		d=(kk*20+i)*i;
		--i;
		}
	kk=kk*kat+(i+1);
	++don;
	}
printf("\n %d nin karekoku %d dir.",say,kk);
getch();
}