/*Roma UsulÅ Äarpma */

#include <stdio.h>
#include <conio.h>
main()

{
 int s1,s2,k,sonuc,a,b;
 clrscr();
  printf("\nBU òZLENCE ROMA USULö ÄARPMA òûLEMòNò GERÄEKLEûTòRòR... \n") ;
 printf("\nBirinci sayçyç giriniz : ");scanf("%d",&s1);
 printf("òkinci sayçyç giriniz : ");scanf("%d",&s2);
 sonuc=0; a=s1;b=s2;
 while (s1>0)
  {
   k=s1%2;
   if (k%2!=0) sonuc+=s2;
   s2+=s2;
   s1=(int)s1/2;
  }
 printf("%d * %d iüleminin sonucu : %d",a,b,sonuc);

 getche();
}
