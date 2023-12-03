/*D”nglerle ilgili program
  Yazan...:Abdulkadir KARACI
  Numara..:97030013240
  Problem...:Her birinde m ‡ekirdek n adet ”bek var. Hamle, se‡ilen
	     bir ”bekteki btn ‡ekirdekleri avuca aldktan sonra o
	     ”bekten itibaren srayla her ”be§e birer ‡ekirdek brakmak
	     ve ‡ekirdekler bitene kadar d”nmek Ÿeklinde (”bek-n den
	     sonra ”bek-1'in gelmesi suretiyle) olacak. her hamle i‡in
	     hangi ”be§in se‡ilece§i random olarak belirlenecek.*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int obek[20],m,n,hamle,obek_sec,cekirdek_al;
char i,p;
void main(){
  textbackground(0);clrscr();
  printf("€ekirdek Says=");scanf("%i",&m);
  printf("™bek Says=");scanf("%i",&n);
     for (i=0;i<n;i++) obek[i]=m;
     printf("Hamle Says=");scanf("%i",&hamle);
     randomize();
     while(hamle!=0){
	    obek_sec=random(n);
	    printf("\n\n====%i. Hamle=====",++p);
	    printf("\n    Se‡ilen ™bek=%i",obek_sec+1);
	    cekirdek_al=obek[obek_sec];
	    obek[obek_sec]=0;
    for(i=0;i<cekirdek_al;i++)
    {
	 obek[obek_sec]++;obek_sec++;
	 if (obek_sec==n) obek_sec=0;
    }
    for(i=0;i<n;i++)
	     printf("\n        Obek[%i]=%i",i+1,obek[i]);
    if (p%3==0) getch();
    hamle--;
		     }
    getch();clrscr();
    printf("\n===™beklerdeki Sondurum===");
    for(i=0;i<n;i++)
	  printf("\n     Obek[%i]=%i",i+1,obek[i]);getch();

}
