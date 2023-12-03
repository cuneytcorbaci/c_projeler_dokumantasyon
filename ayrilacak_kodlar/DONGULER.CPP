#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
int dizi[10]={100,-200,400,-100,550,900,500,300,450,600};

void fordongu(void);
void dowhile(void);
void whiledon(void);

int toplam,k,secim;
char c;
void main()
{
	clrscr();
	do{
	printf("\n1-for dongusu\n");
	printf("2-do-while dongusu\n");
	printf("3-while dongusu\n");
	scanf("%d",&secim);
	switch(secim){
		case 1:fordongu();break;
		case 2:dowhile();break;
		case 3:whiledon();break;
		default:printf("\nyanlis secim");
			printf("\nTekrar secim yapmak istiyor musunuz E/H ?");
			if((c=toupper(getch()))!='E')
				exit(0);
			else break;
	}
	}while(1==1);
}
void fordongu(void)
{
	for(k=0,toplam=0;k<10;++k)
		toplam+=dizi[k];
	printf("for dongusu ile toplam=%d\n",toplam);
}
void dowhile(void)
{
	k=0;
	toplam=0;
	do{
		toplam+=dizi[k];
		k++;
	}while(k<10);
	printf("do-while dongusu ile toplam=%d\n",toplam);
}
void whiledon(void)
{
	k=0;
	toplam=0;
	while(k<10)
	{
		toplam+=dizi[k];
		k++;
	}
	printf("while dongusu ile toplam=%d\n",toplam);
}
