/* Ayse HAYLAMAZ-97030063240*/

/* d”ng sorusuna ”rnek*/


/*Klavyeden girilen 10 say i‡inden en by§n bulan program   */

#include<stdio.h>
#include<conio.h>
int dizi[10];
int i;

int buyuk(int *a)
{
int eb;
eb=*a;
for(i=0;i<10;i++)
{
	if(*(a+i)>eb)
		{
			eb=*(a+i);
		}
}
return(eb);
}

main()
{
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("%d. sayy yazn=",i+1);scanf("%d",&dizi[i]);
	}
	printf("\n\nEn byk say=%d",buyuk(dizi));
	getch();
}