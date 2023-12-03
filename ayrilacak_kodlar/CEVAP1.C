#include<stdio.h>
int a[20][20],ek[20],eb[20],
sat=0,sut=0;

	 void deger()
	 {int i=0,j=0;
	 clrscr();
	 for(i=0;i<sat;i++)
	 for(j=0;j<sut;j++)
	 {printf("%d.SATIR %d.SUTUN GIR...:",i+1,j+1);scanf("%d",&a[i][j]);
	 }}

	 void kucuk()
	 {int i=0,j=0;
	 for(i=0;i<sat;i++)
	 {ek[i]=30000;
	 for(j=0;j<sut;j++)
	 {if(ek[i]>a[i][j]) ek[i]=a[i][j];
	 }printf("\n\n%d SATIRIN EN KUCUGU=%d",i+1,ek[i]);
	 }}

	 void buyuk()
	 {int i=0,j=0;
	 for(i=0;i<sat;i++)
	 {eb[i]=0;
	 for(j=0;j<sut;j++)
	 {if(eb[i]<a[j][i]) eb[i]=a[j][i];
	 }printf("\n\n%d SUTUNUN EN BUYUGU=%d",i+1,eb[i]);
	 }}
main()
{char dev;dev='e';
while(dev=='e')
{clrscr();sat=0;sut=0;
printf("MATRISIN SATIR SAYISINI GIRINIZ..(max=20)..:");scanf("%d",&sat);
printf("MATRISIN SUTUN SAYISINI GIRINIZ..(max=20)..:");scanf("%d",&sut);
deger();kucuk();buyuk();
printf("\n\nDEVAM MI?....:");dev=getch();
}
}
