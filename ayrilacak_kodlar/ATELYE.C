#include<stdio.h>
main()
{long a[3][3],b[9],car=1;
 int k=0,i,j;
 clrscr();
 for(j=2;j<=18;j+=2)
 {for(i=1;i<=j;i++) car*=i;
 printf("\n%ld",car);
 b[k]=car;++k;car=1;}
 k=0;
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
 {if(i==1) {a[i][j]=b[k]-(k+1);++k;}
  else {a[i][j]=b[k]+(k+1);++k;}}
 }
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
  printf("\n%ld",a[i][j]);
getch();
}
