main()
{
float sayi,z,t,m,k;
int sayac;
char devam;
do{
clrscr();
sayi=0;z=0;t=0;m=1;sayac=0;k=1;
printf("Sayiyi girin...:");scanf("%f",&sayi);
while(sayac<7)
{
sayac=sayac+1;
while(t<sayi)
{
z=z+m;t=z*z;
}
z=z-m;m=m/10;t=0;
}
for(k=1;k<10;k++) if(k*k==sayi) z=k;
printf("\n Karekoku...:%f",z);
printf("\n\n Devam mi (E/H) ");
devam=getch();
}while(devam!='h');
}