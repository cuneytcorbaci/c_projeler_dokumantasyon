 //Derste yapçlan
 // Vedat ôzdemir,98030026240

 #include <stdio.h>
 #include <conio.h>
 #define sayi 32
  main()
 {
  int a[4][4],b[4][4],i,j,sut,sut1,sat,sat1;
  int bul[sayi];
  int k,l;
  int adet=0;
  clrscr();
	sut=2;sat=2;
	 sut1=18;
	for (i=0;i<4;i++)
	 for (j=0;j<4;j++)
	  {
		a[i][j]=(i+1)+(j+1);
		b[i][j]=(i+1)*(j+1);
	  }
		printf("òndis Toplam     òndis Äarpçm");
		for (i=0;i<4;i++)
	 for (j=0;j<4;j++)
	  {
		gotoxy(sut,sat);printf("%d",a[i][j]);
		gotoxy(sut1,sat);printf("%d",b[i][j]);
		 sut=sut+3;sut1=sut1+3;
		  if(j==3) {sut=2;sut1=18;sat=sat+1;}
	  }
	for (i=0;i<4;i++)
	 for (j=0;j<4;j++)
	   for(k=0;k<4;k++)
	    for(l=0;l<4;l++)
	      { if (a[i][j]==b[k][l])
		   {adet++;
		    bul[adet-1]=a[i][j];
		    }
		   }
    //Aktarçlan deßerler dizede sçralançyor....
for(i=0;i<adet-1;i++)
 for(j=i+1;j<adet;j++)
  {
    if (bul[i]>bul[j])
       { k=bul[i];
	 bul[i]=bul[j];
	 bul[j]=k;
	 }
  }
   //Bir dizede aynç olan deßerler varsa almçyor....
  printf("\n\n\n Bulunan kesiüim deßerleri");
	l=0;
  for(i=0;i<adet;i++)
  {
    if (bul[i]!=bul[i+1])
      {  l=l+2;
       gotoxy(l,9); printf("%d",bul[i]);}
   printf("\n");
  }

  getch();
 }



