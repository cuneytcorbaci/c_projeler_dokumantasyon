#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int a[10], *p,i;
 for(i=0;i<10;i++)
 {
 printf("%d . elemani gir ",i);scanf("%d",&a[i]);


 }


 p=a;
 for(i=0;i<10;i++)
 printf("%d--",*(p+i));

 for(p=&a[0];p<&a[10];p++){
//printf("%d\n",a[i]);
printf("\n%d",*p);
 }

 getch();






}



