#include<stdio.h>
#include<conio.h>
int topladizi(int a[],int n)
{
	int top=0,i,*p;
	p=a;
	for (i=0;i<n;i++)
	top+=*(p+i);
	return top;
}
int enkucuk(int a[],int n)
{
int i,*p,enk=0;
p=a;
enk=a[0];
for(i=1;i<n;i++)
if (enk >*(p+i))
enk=*(p+i) ;
return (enk);
}





main(void)
{
int dizi[5]={5,7,3,2,11};
clrscr();
printf("toplam = %d\n",topladizi(dizi,5));
printf("enk = %d\n",enkucuk(dizi,5));
getch();

}
