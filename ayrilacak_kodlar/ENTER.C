//BU PROGRAM ESCAPE TUSUNA BASILANA KADAR KLAVYEDEN G�R�LEN
// BO�LUK,ENTER SAYISI VE TAB TUSU SAYISINI SAYAR.
//ONUR ULUSOY 97030034240
# include <stdio.h>
# include <conio.h>
# include <dos.h>

main()
{
int karakter=0,karakter_sayisi=0,enter_sayisi=0,tab_sayisi=0,bosluk_sayisi=0;
struct REGPACK fare;
fare.r_ax=1;
intr(0x33,&fare);
clrscr();
while((karakter=getch())!=27)
	{
	if(karakter==32) bosluk_sayisi+=1;
	if(karakter==13){enter_sayisi+=1;printf("\n");}
	if(karakter==9){tab_sayisi+=1;printf("     ");}
	putch(karakter);
	}

printf("\n(%5i) kere EnteR Tu�una bas�lm��.",enter_sayisi);
printf("\n(%5i) kere TaB Tu�una bas�lm��.",tab_sayisi);
printf("\n(%5i) kere Bo�luK Tu�una bas�lm��.",bosluk_sayisi);
return 0;
getch();
}



