//girilen matriste simetrik olanlar� bulur
#include<stdio.h>
#include<conio.h>
int a[100][100];
main()
{
 int x,i,j,k,n,l;
 clrscr();
 printf("nxn matrisde n ka� olsun:");scanf("%d",&n);
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
	{ printf("birinci matrisin %d. sat�r�n�n %d. s�t�n elemen� :",i+1,j+1);
	 scanf("%d",&a[i][j]); }
  }   clrscr();
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
	{if (i!=j)
	  if (a[i][j]==a[j][i]) {k=i+1; l=j+1; printf("\nbu (%d,%d) elman� ile (%d,%d) eleman� simetirtir\n.",k,l,l,k);}
			else
				printf("bu matrisde simetrik eleman yoktur.");}
	  }

 /*	 getch();
	 printf("\n");
	 x=1;
	 for (i=2;i<n;i++)
	 {

		if (a[i][x]==a[x][i]) {k=i+1;
	  printf("\nbu (%d,%d) elman� ile (%d,%d) eleman� simetirtir.",k,x,x,k);}
		x++;



	 }
  getch();*/
}

