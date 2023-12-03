#include<stdio.h>
#include<conio.h>
int a[4][4],b[4][4],c[4][4];
main()
{
 int i,j,k,l;
 clrscr();
 for(i=0;i<4;i++)
  {for(j=0;j<4;j++)
	{k=i+1; l=j+1; a[i][j]=k+l;}
  }
 clrscr();
 for(i=0;i<4;i++)
  {for(j=0;j<4;j++)
	{k=i+1; l=j+1;b[i][j]=k*l;}
  }
  clrscr();
  for(i=0;i<4;i++)
	{for(j=0;j<4;j++)
	 {printf("%d\t",a[i][j]);}
	 printf("\n");}
	printf("\n\n");
  for(i=0;i<4;i++)
	{for(j=0;j<4;j++)
	 {printf("%d\t",b[i][j]);}
	 printf("\n");
  }
  printf("\nbu matrislerin carpm\n\n");
  for(i=0;i<4;i++)
	{for(j=0;j<4;j++)
	 {c[i][j]=0; for(k=0;k<4;k++)
	  {c[i][j]=(a[i][k]*b[k][j])+c[i][j];}
	  }}
	for(i=0;i<4;i++)
	{for(j=0;j<4;j++)
	 {printf("%d\t",c[i][j]);}
	 printf("\n");
	}

  getch();
}
