/*Haz�rlayan: M.Ferda G�ven
			97030060240  4/B              */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(void)
{
clrscr();
unsigned char dmg;
printf("L�tfen ASCII de�erini g�rmek istedi�iniz �ekilci�e bas�n�z.\n");
printf("                                                 Esc: ��k��\n");
do{
dmg=getch();
if(dmg==27) break;
printf(" %c damgan�n ASCII s�ras�: %i dir\n",dmg,dmg);

}while(1);
return(0);
}