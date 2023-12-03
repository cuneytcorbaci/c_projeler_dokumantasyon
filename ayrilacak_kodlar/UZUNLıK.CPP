/* stringin uzunlugunu bulan program  */

#include<stdio.h>
#include<conio.h>
char dizi[100];
int i,m;
int  uzun(char *a)
{
    for(i=0;*(a+i)!='\0';i++) m++;
    return(m);
}

main()
{
    clrscr();
	 printf("Bir cÅmle gir=");
	 gets(dizi);
	 printf("\n%d",uzun(dizi));
	 getch();

}