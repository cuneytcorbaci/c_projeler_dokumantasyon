#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
main()
{
 int a,b,c,u;
 float alan;
  clrscr();

  printf("1.kenar� gir:");scanf("%d",&a);
  printf("2.kenar� gir:");scanf("%d",&b);
  printf("3.kenar� gir:");scanf("%d",&c);
  if ((abs(a-b)<c) && (c<(a+b)))
  {   u=(a+b+c)/2;
		alan=sqrt(u*(u-a)*(u-b)*(u-c));
		if ((a==b) && (b==c)){ printf("bu bir e� kenar ��gendir");}
			else
				if ((a==b)|| (b==c)||(c==a)) if ((pow(a,2)+pow(b,2)) == pow(c,2))
				 {printf("bu bir dik ikiz kenar ��gendir");}
					else {printf("bu bir ikiz kenar ��gendir");}
			 else if ((pow(a,2)+pow(b,2)) == pow(c,2)){printf("�e�it kenar dik kenar ��gendir");}
			 else {printf("bu bir �e�it kenar ��gendir");}
		printf("\nAlan :%f",alan);
			 }
			 else
			  {printf("bu bir ��gen de�ildir");}

	getch();

  }