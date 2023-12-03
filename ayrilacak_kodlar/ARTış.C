//ocak ayna ait girilen scaklk de§erleri arasnda d”nm noktalarn bulur.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int ay[30];
int i,enb,enk,yerb,yerk,sonuc;
main(void)
{
clrscr();
enb=0;
enk=0;
for(i=0;i<31;i++){
printf(" %d. gnn hava scakl§n giriniz :",i+1);
scanf("%d",&ay[i]);
}

for ( i=0;i<30;i++){
 sonuc= abs(ay[i]-ay[i+1]);
 if (ay[i] > ay[i+1]) {

     if (sonuc>enk) {  enk=sonuc;
	yerk=i;
	}
   }
 if (ay[i] < ay[i+1]) {
     if (sonuc>enb) {  enb=sonuc;
       yerb=i;
       }
     }


 }

printf("\n  en byk artŸ : %d dir [%d] ile [%d] derece arsnda \n\t\t %d. gn ile %d. gnde olmuŸtur.\n",enb,ay[yerb],ay[yerb+1],yerb+1,yerb+2);

printf("\n  en byk dŸŸ : %d dir [%d] ile [%d] derece arsnda \n\t\t %d. gn ile %d. gnde olmuŸtur.\n",enk,ay[yerk],ay[yerk+1],yerk+1,yerk+2);


getch();


}