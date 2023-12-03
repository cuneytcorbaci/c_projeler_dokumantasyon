//sayçnçn bir eksigini alan program

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
printf("bir sayç girin");scanf("%d",&sayi);
printf("\n sayçnçn bi ÅssÅ %d",sample(sayi));
getch();
}