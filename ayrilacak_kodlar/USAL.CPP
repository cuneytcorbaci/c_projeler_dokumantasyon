#include <stdio.h>
#include <conio.h>
main()
{int s,us,us2;
long int son;
clrscr();
gotoxy(5,3);printf("�ss� Al�nacak Say�y� Giriniz.....................: ");scanf("%d",&s);
gotoxy(5,4);printf("Say�n�n Almak �stedi�iniz �s Miktar�n� Giriniz...: ");scanf("%d",&us);
if (us==0) son=1;
son=1;us2=us;
K:
son=son*s;
us2=us2-1;
if (us2>0) goto K;
gotoxy(5,8);printf("%d Say�s�n�n %d �ss� = %d",s,us,son);
getche();
}
