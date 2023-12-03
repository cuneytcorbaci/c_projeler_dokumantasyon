#include<stdio.h>
#include<conio.h>

main()
{
 int k,m=0;
clrscr();
printf("kaálç fibonecci :");
scanf("%d",&m);
for (k=0;k<=m;k++)
 {
  printf("%d\n",fibonecci(k));
 }
getch();
}

int fibonecci (int i)
{
if ((i==0)||(i==1)) return 1;
   else return (fibonecci(i-1)+fibonecci(i-2));
}