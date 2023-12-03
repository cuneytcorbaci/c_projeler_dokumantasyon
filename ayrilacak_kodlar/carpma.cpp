# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>
main(void)
{
int toplam=0,a,sayi1=0,sayi2=0,i,dizi1[20],dizi2[20];
clrscr();
for(i=0;i<20;i++)
{
dizi1[i]=0;
dizi2[i]=0;
}
printf("Ilk sayi    =");
scanf("%i",&sayi1);
printf("Ikinci sayi =");
scanf("%i",&sayi2);
dizi1[0]=sayi1;
dizi2[0]=sayi2;
i=0;
while(dizi1[i]!=0)
{
dizi1[i+1]=dizi1[i]/2;
dizi2[i+1]=dizi2[i]*2;
i++;
}
a=i;
for(i=0;i<a+1;i++)
{
if (pow(-1,dizi1[i])<0)
toplam+=dizi2[i];
}
printf("%i",toplam);
getch();
return 0;
}

