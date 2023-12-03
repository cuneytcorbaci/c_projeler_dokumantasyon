# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <math.h>
# include <ctype.h>
void atoib();
char dizi[' '];
int i=1,j=0,isaret=0,adet=0,kat=0,a=0;
long int us=0,sayi=0;
main(void)
{
clrscr();
printf("Sayilardan olusan bir string ifade giriniz..=");
gets(dizi);
while(dizi[i]>='0'&& dizi[i]<='9')
{
adet++;
i++;
}
if (dizi[0]>='0'&& dizi[i]<='9')
{
adet++;
isaret=0;
}
if (dizi[0]=='-')
isaret=1;
if (dizi[i]=='\x0')
{
atoib();
}
if (isaret==1)
a=isdigit(dizi[1]);
if (isaret==0)
a=isdigit(dizi[0]);
if (dizi[i]!='\x0'|| a==0)
{
puts("Cevirme islemi basarisiz!");
}
else
{
printf("%i",sayi);
}
getch();
return 0;
}
void atoib()
{
for (j=i-1;j>=isaret;j--)
{
us=pow(10,kat);
sayi+=(dizi[j]-'0')*us;
kat++;
}
if (isaret==1)
sayi=-sayi;
}


