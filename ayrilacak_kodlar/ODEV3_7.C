/*Roma Usul� �arpma */

#include <stdio.h>
#include <conio.h>
main()

{
 int s1,s2,k,sonuc,a,b;
 clrscr();
  printf("\nBU �ZLENCE ROMA USUL� �ARPMA ��LEM�N� GER�EKLE�T�R�R... \n") ;
 printf("\nBirinci say�y� giriniz : ");scanf("%d",&s1);
 printf("�kinci say�y� giriniz : ");scanf("%d",&s2);
 sonuc=0; a=s1;b=s2;
 while (s1>0)
  {
   k=s1%2;
   if (k%2!=0) sonuc+=s2;
   s2+=s2;
   s1=(int)s1/2;
  }
 printf("%d * %d i�leminin sonucu : %d",a,b,sonuc);

 getche();
}
