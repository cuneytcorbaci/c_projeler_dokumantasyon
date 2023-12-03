#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#define MONO_EKR 0xB000
#define GRAFIK_EKR 0xB800

typedef struct kayit
	{
	char ad[15],soyad[15],cinsiyet[6],sub[2];
	int no;
	unsigned short int  n1,n2,sin;
	float ort;

	}KAYIT;

KAYIT per;
char far *ekran=(char far *) 0xB8000000;//ekran adresi atanan pointer
char  *tutan;
char *menu[6][15];//menÅ ile ilgili bilgileri tutan dizi
char i;
char satir,sutun,adet,yatay_say,acik=0;char yatay=1;
int dusey[10]={1,1,1,1,1,1,1,1,1};             //dÅüeyde kaáçncç sçradayçz.
char tus,tus1;
KAYIT *personel;
int kayit_say=0,yer;

unsigned char y=10;
struct text_info BILGI;
char EKRAN[80*25*2];

void ek(int sec);
void EKRAN_SAKLA(char near *SAKLA)
{
gettextinfo(&BILGI);
if (BILGI.currmode!=7) movedata(GRAFIK_EKR,0,_DS,(unsigned)SAKLA,80*25*2);
else movedata(MONO_EKR,0,_DS,(unsigned)SAKLA,80*25*2);
}

void EKRAN_GOSTER(char near *SAKLA)
{
gettextinfo(&BILGI);
if (BILGI.currmode!=7) movedata(_DS,(unsigned)SAKLA,GRAFIK_EKR,0,80*25*2);
else movedata(_DS,(unsigned)SAKLA,MONO_EKR,0,80*25*2);
}



  void CURS(int a,int b)
  {union REGS reg;
   reg.h.ah=1;
   reg.x.cx=(a<<8)+b;
   int86(0X10,&reg,&reg);
  }




  void arka_plan()
  { char ch;
    unsigned char a;
    textbackground(0);textcolor(5);lowvideo();
     for (a=2;a<=24;a++)
    {
     gotoxy(1,a);cprintf("≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤≤");
    }
   }

//verilen koordinat ekran edresi koordinatçna áeviriyor
int nokta(int sut,int sat){
  return (sut-1)*2+(sat-1)*160;/*karakterler iáin 0,2,4 diye gider
				1,3,5,7 renk tutar. her karakter iáin
				2 byte yer ayrçlçr*/
}
//--------------------------------------------------------------

  void KUTU1(x,y,x1,y1,renk)
  unsigned char x,y,x1,y1;
  { unsigned char a,b;
    //window(x+2,y+1,x1+2,y1+1);textbackground(8);clrscr();
    //window(x,y,x1,y1);textbackground(5);clrscr();
  //window(1,1,80,25);
     textcolor(15);textbackground(renk);
     for (a=x;a<=x1;a++)
     {
      gotoxy(a,y);cprintf("%c",196);
      gotoxy(a,y1);cprintf("%c",196);
     }
      for(b=y;b<=y1;b++)

      {
       gotoxy(x,b);cprintf("%c",179);
       gotoxy(x1,b);cprintf("%c",179);
      }
    gotoxy(x,y);cprintf("%c",201);gotoxy(x1,y);cprintf("%c",187);
    gotoxy(x,y1);cprintf("%c",200);gotoxy(x1,y1);cprintf("%c",188);
   textcolor(15);
}

void ACIL(unsigned char kat,int m,int r)
{ unsigned char i;
for(i=0;i<=m;i++)
{
 window(42-i*kat,13-i,42+i*kat,13+i);
 textbackground(0);clrscr();
 window(40-i*kat,12-i,40+i*kat,12+i);
 textbackground(r);clrscr();
 window(1,1,80,25);
 KUTU1(40-i*kat,12-i,40+i*kat,12+i,r);delay(40);
}
window(1,1,80,25);
}

//---menÅ ile ilgili tÅm tançmlamalar yapçlçyor. MenÅye yeni seáenek
//ekleme ve áçkarmalar bu bîlÅmde yapçlçyor.
void menu_tanimla(void){
menu[1][0]="5";//satçr sayçsç
menu[1][1]="30";//en uzun sutun
menu[1][2]="5"; // sutun
menu[1][3]="3"; //satçr
menu[1][4]=" Dosya "; //1. seáeneßin 1.satçrç
menu[1][5]="Kayçt Giriüi      CRTL+F1 "; //1. seáeneßin 2. satçrç
menu[1][6]="Kayçt Silme       CRTL+F4 "; //1. seáeneßin 5. satçrç
menu[1][7]="Kayçt DÅzeltme    CRTL+F5 "; //1. seáeneßin 6. satçrç
menu[1][8]="Äçkçü            <ESC> ";   //1. seáeneßin 7. satçrç

menu[2][0]="3"; //satçr sayçsç
menu[2][1]="18";//enuzun sutun
menu[2][2]="15";//sutun
menu[2][3]="3";//satir
menu[2][4]=" Listeleme ";      //2. seáeneßin 1.satçrç
menu[2][5]=" Yazçcçya  "; //2. seáeneßin 2.satçrç
menu[2][6]=" Ekrana    "; //2. seáeneßin 3.satçrç

menu[3][0]="4"; //satçr sayçsç
menu[3][1]="18";//enuzun sutun
menu[3][2]="25";//sutun
menu[3][3]="3";//satir
menu[3][4]=" Arama ";
menu[3][5]="Ada Gîre    ";
menu[3][6]="Soyada Gîre ";
menu[3][7]="Noya Gîre   ";
yatay_say=3;//yataydaki eleman sayçsç

/*menu[4][0]="4"; //satçr sayçsç
menu[4][1]="18";//enuzun sutun
menu[4][2]="35";//sutun
menu[4][3]="3";//satir
menu[4][4]=" Arama ";
menu[4][5]="Kopyala     ";
menu[4][6]="Yapçütçr    ";
menu[4][7]="Kes         ";*/

yatay_say=3;/*yataydaki eleman sayçsç. Yukarda menu[4]'le ilgili
	     tançmlamalar pasif haldedir. bunu aktif yapçp yatay_say=4
	     yaparsançz yeni bir seáenek eklemiü olursunuz*/
}
//-------------------------------------------------------

//----saßa sola giderken menÅ patlayarak aáçlçr-----
void acil(char usut,char usat,char sutsay,char satsay)
{  unsigned char i,j,tutsut,tutsat;long int k;
   tutsut=usut;tutsat=usat;
   for(i=usat;i<=tutsat+satsay+1;i++)
   {
     for(j=usut;j<=tutsut+sutsay+2;j++)
     {
	if ((i>tutsat && j>=sutsay+tutsut+1) ||(j>tutsut && i>=satsay+tutsat+1))
	ekran[nokta(j,i)+1]=8;
	else if (i<=tutsat+satsay && j<=tutsut+sutsay)
	{
	  ekran[nokta(j,i)]=' ';
	  ekran[nokta(j,i)+1]=27;//renk (zemin)yrgb (karakter rengi)prgb
	}
       for(k=1;k<=4000;k++);;usut++;
     }
	usat++;usut=tutsut;
   }
   KUTU1(tutsut,tutsat,tutsut+sutsay,tutsat+satsay,1);
}
//--------------------------------------------------------

//saßa sola giderken menÅ kapançr------------------
void kapan(char usut,char usat,char sutsay,char satsay)
{
     unsigned char i,j,tutsut,tutsat; long int k;
     tutsut=usut;tutsat=usat;
     for(i=tutsat+satsay+2;i>=tutsat;i--)
     {
	  for(j=tutsut+sutsay+2;j>=tutsut;j--)
	  {
	   if ((i>tutsat && j>=sutsay+tutsut+1) ||(j>tutsut && i>=satsay+tutsat+2))
	   ekran[nokta(j,i)+1]=5;
	   else if (i<=tutsat+satsay+1 && j<=tutsut+sutsay)
	   {
	    ekran[nokta(j,i)]='≤';
	    ekran[nokta(j,i)+1]=5;} //renk (zemin)yrgb (karakter rengi)prgb
	    for(k=1;k<=4000;k++);;usut++;
	   }
	  usat++;usut=tutsut;
	 }
    }

//---yatay menÅnÅn aktif yada pasif rengini yazar---
   void yataya_renk_ver(char yatayda_hangisi,char renk)
   {
       char k,ysut;
       ysut=atoi(menu[yatayda_hangisi][2]);
	 for(k=2;k<=strlen(menu[yatayda_hangisi][4]);k++)
	   ekran[nokta(ysut+k-3,1)+1]=renk;
       if (yatayda_hangisi==2) ekran[nokta(ysut+3-3,1)+1]=renk+1;
       else ekran[nokta(ysut+2-3,1)+1]=renk+1;
   }
//----------------------------------------------------

//--DÅüey menÅnÅn aktif ya da pasif rengini yazar----
   void duseye_renk_ver(int duseyde_hangisi,char yatayda_hangisi,char renk)
   {
       char ysat;char uzun_sutun,ysut;
       ysat=atoi(menu[yatayda_hangisi][3]);
       uzun_sutun=atoi(menu[yatayda_hangisi][1]);
       ysut=atoi(menu[yatayda_hangisi][2]);
       for(i=2;i<=uzun_sutun;i++)
	 ekran[nokta(ysut+i-3,duseyde_hangisi+ysat-1)+1]=renk;
   }

//ilk aáçlçüta yatay menÅ seáeneklerini ekrana yazar
 void baslik_yaz(void)
 {
    char i,ysut1;
     for (i=1;i<=yatay_say;i++)
     {
       ysut1=atoi(menu[i][2]);
       gotoxy(ysut1-2,1);printf("%s",menu[i][4]);
       yataya_renk_ver(i,112);
    }
 }

 //--dikey menu aáçlçyor ve seáenekler yazçlçyor yada aáçksa kapatçlçyor---
 void cerceve(int sut1,int sat1,int sut2,int sat2,int renk)
	{
	int i,j;
	textcolor(14);
	for(i=sut1;i<sut2;i++) //ekrana cercevenin gîlgeli arka zemin rengi ciziliyor
		for(j=sat1;j<sat2;j++)
			{
			 textbackground(0);gotoxy(i+2,j+1);cprintf(" ");
			 textbackground(renk); gotoxy(i,j);cprintf(" ");
			}
	for(i=sut1+2;i<sut2-2;i++) //cercevenin ÅstÅ ciziliyor
		{
		gotoxy(i,sat1);cprintf("%c",205);
		gotoxy(i,sat2-1);cprintf("%c",205);
		}
	for(j=sat1+1;j<sat2-1;j++) //cercevenin kenarlarç ciziliyor
		{
		 gotoxy(sut1+1,j);cprintf("%c",186);
		 gotoxy(sut2-2,j);cprintf("%c",186);
		}
	gotoxy(sut1+1,sat1);cprintf("%c",201); //cercevenin kenarlarç ciziliyor
	gotoxy(sut2-2,sat1);cprintf("%c",187);
	gotoxy(sut1+1,sat2-1);cprintf("%c",200);
	gotoxy(sut2-2,sat2-1);cprintf("%c",188);
	}

  //--------
  void menu_yaz(char yatayda_hangisi,int duseyde_hangisi,char ac)
  {
    char ysut,ysat,adet,uzun_sutun,k;

     ysut=atoi(menu[yatayda_hangisi][2]);
     ysat=atoi(menu[yatayda_hangisi][3]);
     adet=atoi(menu[yatayda_hangisi][0]);
     uzun_sutun=atoi(menu[yatayda_hangisi][1]);
     if (ac==0) kapan(ysut-2,ysat-1,uzun_sutun,adet);      //aáçksa kapat
     if (ac){                                              //kapalçysa aá
	     acil(ysut-2,ysat-1,uzun_sutun,adet);
	     for(i=4;i<=3+adet;i++)
	      {
		if (i>4){
			gotoxy(ysut,ysat++);
			printf("%s",menu[yatayda_hangisi][i]);
			}
	      }
	     duseye_renk_ver(dusey[yatay],yatay,58);
	   }
   }
//-------------------------------------------------------
//sol saß tuülarçna basçldçkáa aáçkken ve deßilken menÅleri aktif ve pasif yapar.
 void yatay_aktif_pasif(char kontrol){//kontrol deßiükeni aktif yada pasif durumunu ayarlçyor
   if (kontrol){
	       if (acik) menu_yaz(yatay,dusey[yatay],1);
	       yataya_renk_ver(yatay,58);
	       }
   else if (kontrol==0)
		      {
		      if (acik) menu_yaz(yatay,dusey[yatay],0);
		      yataya_renk_ver(yatay,112);
		      }
 }
//----------------------------------------------------------------------
void ada_gore_arama()
{
  char aranan[15];
  int x,y;
  cerceve(22,10,60,13,9);
  gotoxy(25,11);
  if (kayit_say!=0) {
  printf("Aranan kiüinin Adç.....:");
  CURS(4,1);
  scanf("%s",aranan);
  CURS(1,0);
  EKRAN_GOSTER(EKRAN);

  cerceve(4,3,78,23,9);
  gotoxy(9,4);printf("  NO      AD        SOYAD     CòNSòYET    NOT2   NOT2   ORTALMA");
  gotoxy(7,5);printf("_____________________________________________________________________");
   x=6;
   y=10;

 for (i=0;i<kayit_say;i++)
 {
   if (strcmp(personel[i].ad,aranan)==0)
 {  gotoxy(y-4,x);printf("%3d-",i+1);
    gotoxy(y,x);printf("%d",personel[i].no);
    gotoxy(y+6,x);printf("%-10s",personel[i].ad);
    gotoxy(y+17,x);printf("%-10s",personel[i].soyad);
    gotoxy(y+28,x);printf("%-6s",personel[i].cinsiyet);
    gotoxy(y+45,x);printf("%d",personel[i].n1);
    gotoxy(y+50,x);printf("%d",personel[i].n2);
    gotoxy(y+55,x);printf("%3.2f",personel[i].ort);
    x++;

 }
 }
 } else {gotoxy(35,11);printf("Kayçt Yok!");}
 getch();
 }
 //----------
 void soyada_gore_arama()
{
  char aranan[15];
  int x,y;
  cerceve(22,10,60,13,9);
  gotoxy(25,11);
  if (kayit_say!=0) {
  printf("Aranan kiüinin Soyadç..:");
  CURS(4,1);
  scanf("%s",aranan);
  CURS(1,0);
  EKRAN_GOSTER(EKRAN);

  cerceve(4,3,78,23,9);
  gotoxy(9,4);printf("  NO      AD        SOYAD     CòNSòYET    NOT2   NOT2   ORTALMA");
  gotoxy(7,5);printf("_____________________________________________________________________");
   x=6;
   y=10;

 for (i=0;i<kayit_say;i++)
 {
   if (strcmp(personel[i].soyad,aranan)==0)
 {  gotoxy(y-4,x);printf("%3d-",i+1);
    gotoxy(y,x);printf("%d",personel[i].no);
    gotoxy(y+6,x);printf("%-10s",personel[i].ad);
    gotoxy(y+17,x);printf("%-10s",personel[i].soyad);
    gotoxy(y+28,x);printf("%-6s",personel[i].cinsiyet);
    gotoxy(y+45,x);printf("%d",personel[i].n1);
    gotoxy(y+50,x);printf("%d",personel[i].n2);
    gotoxy(y+55,x);printf("%3.2f",personel[i].ort);
    x++;

 }
 }
 } else {gotoxy(35,11);printf("Kayçt Yok!");}
 getch();
 }

//-------------------
void numaraya_gore_arama()
{ char ch,tus,ct[6];
  int aranan;
  int x,y;
  cerceve(22,10,60,13,9);
  gotoxy(25,11);
  if (kayit_say!=0) {
  printf("Aranan kiüinin Adç.....:");
  CURS(4,1);
  scanf("%d",&aranan);
  CURS(1,0);
  EKRAN_GOSTER(EKRAN);


 for (i=0;i<kayit_say;i++)
 {
   if (personel[i].no==aranan){ yer=i;


       ek(0);
       CURS(8,1);gotoxy(45,8);printf("%d",personel[yer].no);
       gotoxy(45,9);printf("%s",personel[yer].ad); gotoxy(55,9);
       gotoxy(45,10);printf("%s",personel[yer].soyad);
       gotoxy(45,11);printf("%s",personel[yer].cinsiyet);
       gotoxy(45,12);printf("%d",personel[yer].sin);
       gotoxy(45,13);printf("%d",personel[yer].n1);
       gotoxy(45,14);printf("%d",personel[yer].n2);
       gotoxy(45,15);printf("%5.2f",per.ort);
   break;}

 }
 } else {gotoxy(35,11);printf("Kayçt Yok!");}
 getch();

 }



//-----------------
  void sec_yaz(char *acikla)
 {
  ACIL(3,3,12);gotoxy(33,12);textcolor(15);
  cprintf("%s",acikla);
 }
  //---------------
   int  yer_ara(int numara)
   {
    for (i=0;i<kayit_say;i++)
      {
       if (personel[i].no==numara) return (i);

      }

   }


  //---------------
 void liste(void)
 {int x,y;
  cerceve(4,3,78,23,9);
  gotoxy(9,4);printf("  NO      AD        SOYAD     CòNSòYET    NOT2   NOT2   ORTALMA");
  gotoxy(7,5);printf("_____________________________________________________________________");
   x=6;
   y=10;
 for (i=0;i<kayit_say;i++)

 {  gotoxy(y-4,x);printf("%3d-",i+1);
    gotoxy(y,x);printf("%d",personel[i].no);
    gotoxy(y+6,x);printf("%-10s",personel[i].ad);
    gotoxy(y+17,x);printf("%-10s",personel[i].soyad);
    gotoxy(y+28,x);printf("%-6s",personel[i].cinsiyet);
    gotoxy(y+45,x);printf("%d",personel[i].n1);
    gotoxy(y+50,x);printf("%d",personel[i].n2);
    gotoxy(y+55,x);printf("%3.2f",personel[i].ort);
    x++;

 }
 getch();
 }
//-----------------------------
int  ara()
{int numara;
cerceve(22,10,60,13,9);
gotoxy(25,11);
if (kayit_say!=0) {printf("ôßrenci Numarasçnç giriniz :");
CURS(4,1);
scanf("%d",&numara);
for (i=0;i<kayit_say;i++)

 {
 if (personel[i].no==numara) return i;
 }
} else  {printf("    Hiá Bilgi Girilmemiü!");getch();return( -1);};
CURS(1,0);
return (-1);
}





//--------------------------
 void duzelt(void)
  {

			char ch,tus,ct[6];

			gotoxy(30,7);cprintf("DöZELTME FORMU  :yer :%d",i+1,yer);
			CURS(8,1);gotoxy(45,8);scanf("%d",&per.no);
			gotoxy(45,9);scanf("%s",per.ad);
			gotoxy(45,10);scanf("%s",per.soyad);
			strcpy(ct,"BAY");CURS(1,0);
			do
			{
			gotoxy(45,11);printf("%-5s",ct);
			tus=getch();
			if((tus==75)||(tus==77))
				if(0==strcmp(ct,"BAY"))strcpy(ct,"BAYAN");
				else strcpy(ct,"BAY");
			}
			while(tus!=13);
		CURS(8,1);
		strcpy(per.cinsiyet,ct);
		gotoxy(45,12);scanf("%d",&per.sin);
		gotoxy(45,13);scanf("%d",&per.n1);
		gotoxy(45,14);scanf("%d",&per.n2);
		gotoxy(45,15);printf("%5.2f",per.ort);
		   gotoxy(26,16);textcolor(4);textbackground(9);cprintf("BòLGòLER GöNCELLENSòN Mò?");ch=getch();
		   ch=toupper(ch);
		   if (ch=='E' ) {
		   per.ort=(per.n1+per.n2)/2;
		   personel[yer]=per;

		   gotoxy(26,16); textcolor(4); textbackground(9);cprintf("DöZELTME BAûARIYLA TAMAMLANDI!");getch();
		   }
		   else {gotoxy(26,16); textcolor(4); textbackground(9);cprintf("DöZELTME òûLEMò òPTAL EDòLDò!");getch();}



      CURS(1,0);

    //  liste();
 }

//-----------------------------
 void sil(void)
  {

			char ch,tus,ct[6];

			gotoxy(30,7);cprintf("SòLME FORMU :yer :%d",i+1,yer);
			CURS(8,1);gotoxy(45,8);printf("%d",personel[yer].no);
			gotoxy(45,9);printf("%s",personel[yer].ad); gotoxy(55,9);
			gotoxy(45,10);printf("%s",personel[yer].soyad);

			gotoxy(45,11);printf("%s",personel[yer].cinsiyet);

		gotoxy(45,12);printf("%d",personel[yer].sin);
		gotoxy(45,13);printf("%d",personel[yer].n1);
		gotoxy(45,14);printf("%d",personel[yer].n2);
		   gotoxy(45,15);printf("%5.2f",per.ort);
		   gotoxy(26,16);textcolor(4);textbackground(9);cprintf("BòLGòLER SòLòNSòN Mò[E\\H]");ch=getch();
		   ch=toupper(ch);
		   if (ch=='E' ) {
		   for (i=yer;yer<kayit_say-1;yer++)
		   {
		   personel[i]=personel[i+1];

		   }
		   kayit_say--;
		   gotoxy(26,16); textcolor(4); textbackground(9);cprintf("DöZELTME BAûARIYLA TAMAMLANDI!");getch();
		   }
		   else {gotoxy(26,16); textcolor(4); textbackground(9);cprintf("DöZELTME òûLEMò òPTAL EDòLDò!");getch();}



      CURS(1,0);
  //    liste();
 }





 //---------------------------
 void kaydet(void)
  {
  char ch,tus,ct[6];
			for(i=0;i<kayit_say;i++)
			{
			gotoxy(30,7);cprintf("%d. ô¶RENCòNòN BòLGòLERò",i+1);
			CURS(8,1);gotoxy(45,8);scanf("%d",&per.no);
			gotoxy(45,9);scanf("%s",per.ad);
			gotoxy(45,10);scanf("%s",per.soyad);
			strcpy(ct,"BAY");CURS(1,0);
			do
			{
			gotoxy(45,11);printf("%-5s",ct);
			tus=getch();
			if((tus==75)||(tus==77))
				if(0==strcmp(ct,"BAY"))strcpy(ct,"BAYAN");
				else strcpy(ct,"BAY");
			}
		while(tus!=13);
		CURS(8,1);
		strcpy(per.cinsiyet,ct);
		gotoxy(45,12);scanf("%d",&per.sin);
		gotoxy(45,13);scanf("%d",&per.n1);
		gotoxy(45,14);scanf("%d",&per.n2);
		per.ort=(per.n1+per.n2)/2;
		gotoxy(45,15);printf("%5.2f",per.ort);
		personel[i]=per;
		if (i!=kayit_say-1)
		{
		   gotoxy(26,16);textcolor(4);textbackground(9);cprintf("DEVAM EDECEK MòSòNòZ? [E/H]");ch=getch();
		   ch=toupper(ch);
		   if (ch=='E' ) ek(1); else if (ch=='H') {kayit_say=i+1;break;}
		}
	       if (i==kayit_say-1)
	       {
	       gotoxy(26,16); textcolor(4); textbackground(9);cprintf("KAYIT GòRòûò SONA ERDò!");getch();

	       }
	     }

      CURS(1,0);
//      liste();
 }

 void ek(int sec)
	{
	char ch,tus,ct[6];
   //	ekrdg("EKR3.SCR");
	cerceve(18,6,65,18,9);
	if(sec==1){gotoxy(30,7);textcolor(4);cprintf("YENò DEGERLERò GòRòN");}
	gotoxy(22,8);printf("OKUL NO...............: ");
	gotoxy(22,9);printf("ADI...................: ");
	gotoxy(22,10);printf("SOYADI................: ");
	gotoxy(22,11);printf("CòNSòYET..............: ");
	gotoxy(22,12);printf("SINIFI................: ");
	gotoxy(22,13);printf("1.SINAV.NOTU..........: ");
	gotoxy(22,14);printf("2.SINAV.NOTU..........: ");
	gotoxy(22,15);printf("ORTALAMASI............: ");
      }
      //   ----------
void kac_kayit()
{
cerceve(22,10,60,13,9);
gotoxy(25,11);
printf("kaá kayçt gireceksiniz :");
CURS(4,1);
scanf("%d",&kayit_say);
CURS(1,0);
personel=(KAYIT *) malloc(kayit_say * sizeof(KAYIT));
}
//------------
void yazdir()
{
cerceve(22,10,60,13,9);
gotoxy(25,11);
printf("Yazçcçya bilgi gînderildi");
CURS(1,0);
getch();
}

//------MenÅden seáim yapçldçktan sonra yapçlacak iülemler---------------
void sec(void){
 switch(yatay)
 {
  case 1:switch(dusey[yatay])//birinci yatay menunun dikey seáenekleri seáildißinde
	 {
	 case 1:EKRAN_SAKLA(EKRAN);kac_kayit();ek(1);kaydet();EKRAN_GOSTER(EKRAN);CURS(1,0);break; //ilk kayçt
	 case 2:EKRAN_SAKLA(EKRAN);yer=ara();if (yer!=-1) {ek(0);sil();}EKRAN_GOSTER(EKRAN);CURS(1,0);break;   //silme
	 case 3:EKRAN_SAKLA(EKRAN);yer=ara();if (yer!=-1) {ek(0);duzelt();}EKRAN_GOSTER(EKRAN);CURS(1,0);break; //dÅzeltme
	 case 4:exit(0);
	 }break;

 case 2:switch(dusey[yatay])//ikinci yatay menunun dikey seáenekleri seáildißinde
	 {
	 case 1:EKRAN_SAKLA(EKRAN);yazdir();EKRAN_GOSTER(EKRAN);CURS(1,0);break;//yazçcçya
	 case 2:EKRAN_SAKLA(EKRAN);liste();EKRAN_GOSTER(EKRAN);CURS(1,0);break;//ekrana
	 } break;

 case 3:switch(dusey[yatay])         //öáÅncÅ yatay menunun dikey seáenekleri seáildißinde
	 {
	 case 1:EKRAN_SAKLA(EKRAN);ada_gore_arama();EKRAN_GOSTER(EKRAN);CURS(1,0);break; //ada gîre arama
	 case 2:EKRAN_SAKLA(EKRAN);soyada_gore_arama();EKRAN_GOSTER(EKRAN);CURS(1,0);break;//soyada gîre
	 case 3:EKRAN_SAKLA(EKRAN);numaraya_gore_arama();EKRAN_GOSTER(EKRAN);CURS(1,0);break;//numaraya gîre
	 } break;
 }
}
//---------------------------------------------------------------------

//---baslangçá ekranç basçlçyor-----------------
void ilk_ekrani_bas(void){
arka_plan();
baslik_yaz();yataya_renk_ver(yatay,58);
textcolor(1);textbackground(7);
gotoxy(50,25);cprintf("Copy Right AyüegÅl UÄAR");
}

//------menudeki tuü kontrolleri yapçlçyor--------------
void menu_kontrol(void){
  do
  {
      tus=getch();
      if (tus==0) tus1=getch();
      switch(tus1){
      case 77://saß ok tuüu ise
	yatay_aktif_pasif(0);
	yatay++;if (yatay>yatay_say) yatay=1;
	yatay_aktif_pasif(1);break;

      case 75: //sol ok tuüu ise
      yatay_aktif_pasif(0);
      yatay--;if (yatay<=0) yatay=yatay_say;
      yatay_aktif_pasif(1);break;

      case 80: //alt ok tuüu ise
      if (acik==0) {menu_yaz(yatay,dusey[yatay],1);acik=1;}
      else if (acik){
      duseye_renk_ver(dusey[yatay],yatay,27);
      dusey[yatay]++;if (dusey[yatay]>=atoi(menu[yatay][0])) dusey[yatay]=1;
      duseye_renk_ver(dusey[yatay],yatay,58);}break;

      case 72: //Åst ok tuüu ise
	duseye_renk_ver(dusey[yatay],yatay,27);
	dusey[yatay]--;if (dusey[yatay]<=0) dusey[yatay]=atoi(menu[yatay][0])-1;
	duseye_renk_ver(dusey[yatay],yatay,58);break;

     case 32://alt+D tuüu
      if (acik) yatay_aktif_pasif(0);
      if(acik==0) yataya_renk_ver(yatay,112);
      yatay=1;acik=1;
      yatay_aktif_pasif(1);break;
     case 27://alt+Å tuüu
      if (acik) yatay_aktif_pasif(0);
      if(acik==0) yataya_renk_ver(yatay,112);
      yatay=2;acik=1;
      yatay_aktif_pasif(1);break;
    case 30://alt+A tuüu
      if (acik) yatay_aktif_pasif(0);
      if(acik==0) yataya_renk_ver(yatay,112);
      yatay=3;acik=1;
      yatay_aktif_pasif(1);break;
    case 94:if (acik)menu_yaz(yatay,dusey[yatay],0);
	    yatay=1;dusey[yatay]=1;break; //CTRL+F1
    case 95:if (acik)menu_yaz(yatay,dusey[yatay],0);
	    yatay=1;dusey[yatay]=2;break; //CTRL+F2
    case 96 :if (acik)menu_yaz(yatay,dusey[yatay],0);
	     yatay=1;dusey[yatay]=3;break;//CTRL+F3
    case 97 :if (acik)menu_yaz(yatay,dusey[yatay],0);
	      yatay=1;dusey[yatay]=4;break;//CTRL+F4
    case 98 :if (acik)menu_yaz(yatay,dusey[yatay],0);
	      yatay=1;dusey[yatay]=5;break;//CTRL+F5

    }

    if (tus1==94 || tus1==95 || tus1==96 || tus1==97 || tus1==98) {
    sec();delay(700);
    ilk_ekrani_bas();
    if(acik) menu_yaz(yatay,dusey[yatay],1);
    }
    if (tus==13) {//enter tuüu ise
			   if (acik==0)//kçsayolla seáilen seáeneßin ÅstÅne gel
			   {menu_yaz(yatay,dusey[yatay],1);acik=1;}
			   else if (acik)
			   {
			      menu_yaz(yatay,dusey[yatay],0);
			      sec();/*sec() fonksiyonu iáinden
			      seáiminizle ilgili fonksiyonu áaßçrabilirsiniz*/
			      delay(700);
			      ilk_ekrani_bas();
			      menu_yaz(yatay,dusey[yatay],1);
			    }
		 }

    if (tus==27&&acik==1)  {yatay_aktif_pasif(0);
			    yataya_renk_ver(yatay,58);
			    acik=0;}
     else if (tus==27&&acik==0) acik=2;
    tus1=0;
  }while(tus!=27 || acik!=2);
}
//--------------------------------------------------------------------

void main(void)
{
//char ssut,ssat,sadet,suzun_sutun,tut1;
CURS(1,0);
textbackground(7);clrscr();menu_tanimla();
ilk_ekrani_bas();

menu_kontrol();

//getch();
}