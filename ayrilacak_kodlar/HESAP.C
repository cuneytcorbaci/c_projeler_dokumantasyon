#include<stdio.h>
#include<conio.h>
main()
{
  int a,b;
  char islem;
  a=0; b=0;
  clrscr();
  printf("ilk sayi giriniz:\n");
  scanf("%i",&a);
  printf("operatîrÅ giriniz:\n");
  islem=getche();
  do
  {
     printf("\nsayilari giriniz:\n");
     scanf("%i",&b);
     switch(islem)
     {    case '+':{a=a+b; break;}
	  case '-':{a=a-b; break;}
	  case '*':{a=a*b; break;}
	  case '/':{a=a/b; break;}
     }
     printf("operatîrÅ giriniz:\n");
     islem=getche();
  }
  while(islem!='=');
  printf("\nislemin sonucu=%i",a);
  getch();
  return(0);
}