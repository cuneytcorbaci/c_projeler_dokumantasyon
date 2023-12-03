/*girilen sayçnçn ardçüçk toplamlarç üeklinde ifade eder*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int i,j,top,x,t,y;
clrscr();
j=1;
i=1;
top=0;
y=1;
printf("\nsayç gir: ");scanf("\n%d",&x);
for (i=y;i<=x;i++)
{
if (top>=x)
{
y=y+1; top=0;i=y;
}
top=top+i;
if (top==x)
{
printf("\n\n%d=",x);
for (j=y;j<=i;j++)
{
if (j==y) printf("%d",j);
else printf("+%d",j);
}
}
}
}
