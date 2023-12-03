#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
main()
{
 int a,b,c,u;
 float alan;
  clrscr();

  printf("1.kenarç gir:");scanf("%d",&a);
  printf("2.kenarç gir:");scanf("%d",&b);
  printf("3.kenarç gir:");scanf("%d",&c);
  if ((abs(a-b)<c) && (c<(a+b)))
  {   u=(a+b+c)/2;
		alan=sqrt(u*(u-a)*(u-b)*(u-c));
		if ((a==b) && (b==c)){ printf("bu bir eü kenar Åágendir");}
			else
				if ((a==b)|| (b==c)||(c==a)) if ((pow(a,2)+pow(b,2)) == pow(c,2))
				 {printf("bu bir dik ikiz kenar Åágendir");}
					else {printf("bu bir ikiz kenar Åágendir");}
			 else if ((pow(a,2)+pow(b,2)) == pow(c,2)){printf("áeüit kenar dik kenar Åágendir");}
			 else {printf("bu bir áeüit kenar Åágendir");}
		printf("\nAlan :%f",alan);
			 }
			 else
			  {printf("bu bir Åágen deßildir");}

	getch();

  }