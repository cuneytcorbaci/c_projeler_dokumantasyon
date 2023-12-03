#include <stdio.h>
#include <conio.h>
main()
{int s,us,us2;
long int son;
clrscr();
gotoxy(5,3);printf("össÅ Alçnacak Sayçyç Giriniz.....................: ");scanf("%d",&s);
gotoxy(5,4);printf("Sayçnçn Almak òstedißiniz ös Miktarçnç Giriniz...: ");scanf("%d",&us);
if (us==0) son=1;
son=1;us2=us;
K:
son=son*s;
us2=us2-1;
if (us2>0) goto K;
gotoxy(5,8);printf("%d Sayçsçnçn %d össÅ = %d",s,us,son);
getche();
}
