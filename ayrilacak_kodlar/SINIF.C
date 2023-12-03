main()
{int i;
float s[5],top=0,ort,n1,n2,n3;
char is[5][15];
for (i=0;i<5;i++)
	{clrscr();
	printf("Ismi gir ...");scanf("%s",&is[i]);
	printf("\n %s icin\n",is[i]);
	printf("1. not ...:");scanf("%f",&n1);
	printf("2. not ...:");scanf("%f",&n2);
	printf("3. not ...:");scanf("%f",&n3);
	s[i]=(n1+n2+n3)/3;
	top=top+s[i];
	printf("\n\n\n Bu ogrencinin ortalamasi %f ",s[i]);
	getch();
	}
ort=top/5;
clrscr();
printf("\n Sinifin ortalamasi...:%f",ort);
for(i=0;i<5;i++)
	{if(s[i]>=ort) printf("\n %s gecti.",is[i]);
	else printf("\n %s kaldi.",is[i]);}
getch();
}