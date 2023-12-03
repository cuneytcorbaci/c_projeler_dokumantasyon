#include<stdaio.h>
main()
{int sa,da,sn;
clrscr();
printf("SAATI GIRINIZ........:");scanf("%d",&sa);
printf("DAKIKAYI GIRINIZ.....:");scanf("%d",&da);
printf("SANIYEYI GIRINIZ.....:");scanf("%d",&sn);
while(!kbhit())
{gotoxy(25,14);printf("%2d:%2d:%2d",sa,da,sn);delay(1000);
++sn;
if(sn==60) {sn=0;++da;}
if(da==60) {printf("\a");da=0;++sa;}
if(sa==24) sa=0;
}}