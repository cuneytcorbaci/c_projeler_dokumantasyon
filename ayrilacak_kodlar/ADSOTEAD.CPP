#include <stdio.h>
#include <conio.h>
main()
{unsigned char soy,adres,tel,ad;
clrscr();
gotoxy(5,3);printf("Adçnçz......: ");scanf("%s",ad);
gotoxy(5,4);printf("Soyadçnçz...: ");scanf("%s",soy);
gotoxy(5,5);printf("Telefon.....: ");scanf("%s",tel);
gotoxy(5,6);printf("Adres.......: ");scanf("%s",adres);
clrscr();
gotoxy(10,8);printf("Girilen Ad........: %s",ad);
gotoxy(10,9);printf("Girilen Soyad.....: %s",soy);
gotoxy(10,10);printf("Girilen Telefon...: %s",tel);
gotoxy(10,11);printf("Girilen Adres.....: %s",adres);
getche();
}


