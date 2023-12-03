#include<stdio.h>
#include<conio.h>

main()
{
int sayi[10] ;
int say;
int enb;
int enk;
for(say=0;say<=10;++say)
{
printf("%d . sayiyi giriniz :",say+1);scanf("%d",&sayi[say]);

}


enb=sayi[0];

enk=sayi[0];
for (say =1;say<=10;++say)
{
if (enb<sayi[say]) enb=sayi[say];
}

for (say =1;say<=10;++say)
{
if (enk>sayi[say]) enk=sayi[say];
}

printf("En Buyuk Sayi : %d ",enb);
printf("En Kucuk Sayi : %d ",enk);
getch();
}
