#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{ int ay;
clrscr();
 printf("Ay numaras�n� giriniz :");
  scanf("%d",&ay);
  switch (ay)
  {
	case 1:{ printf("Ocak");
	break;}
	case 2:{printf("�ubat");break;}
	case 3:{printf("\nMart");break;}
	case 4:{printf("\nNisan");break;}
	case 5:{printf("\nMay�s");break;}
	case 6:{printf("\nHaziran");break;}
	case 7:{printf("\nTemmuz");break;}
	case 8:{printf("\nA�ustos");break;}
	case 9:{printf("\nEylul");break;}
	case 10:{printf("\nEkim");break;}
	case 11:{printf("\nKas�m");break;}
	case 12:{printf("\nAral�k");break;}
	default : printf("Yanl�� De�er Girdiniz");


  }
getch();







}