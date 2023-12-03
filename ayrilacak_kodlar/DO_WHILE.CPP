/*Hazçrlayan: M.Ferda GÅven
			97030060240  4/B              */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(void)
{
clrscr();
unsigned char dmg;
printf("LÅtfen ASCII deßerini gîrmek istedißiniz üekilciße basçnçz.\n");
printf("                                                 Esc: áçkçü\n");
do{
dmg=getch();
if(dmg==27) break;
printf(" %c damgançn ASCII sçrasç: %i dir\n",dmg,dmg);

}while(1);
return(0);
}