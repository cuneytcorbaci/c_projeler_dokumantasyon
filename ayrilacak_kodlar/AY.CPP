#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{ int ay;
clrscr();
 printf("Ay numarasçnç giriniz :");
  scanf("%d",&ay);
  switch (ay)
  {
	case 1:{ printf("Ocak");
	break;}
	case 2:{printf("ûubat");break;}
	case 3:{printf("\nMart");break;}
	case 4:{printf("\nNisan");break;}
	case 5:{printf("\nMayçs");break;}
	case 6:{printf("\nHaziran");break;}
	case 7:{printf("\nTemmuz");break;}
	case 8:{printf("\nAßustos");break;}
	case 9:{printf("\nEylul");break;}
	case 10:{printf("\nEkim");break;}
	case 11:{printf("\nKasçm");break;}
	case 12:{printf("\nAralçk");break;}
	default : printf("Yanlçü Deßer Girdiniz");


  }
getch();







}