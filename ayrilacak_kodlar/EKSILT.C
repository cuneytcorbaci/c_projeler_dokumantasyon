//say�n�n bir eksigini alan program

#include<stdio.h>
#include<conio.h>
int i,j,sayi;

int sample(int gelen)
{
gelen=gelen-1;
return(gelen);
}

main()
{
clrscr();
printf("bir say� girin");scanf("%d",&sayi);
printf("\n say�n�n bi �ss� %d",sample(sayi));
getch();
}