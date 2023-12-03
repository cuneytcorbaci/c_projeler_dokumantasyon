#include <conio.h>
#include<stdio.h>
#include<string.h>
#include<io.h>
int uz,i;
char *tcumle,a[10];
void terscumle(char cumle[100]){

if ( uz>=0) {
printf("%c",cumle[uz]);
uz--;
terscumle(cumle);



}
}
void main()
{

clrscr();
uz=7;
char c;
int say;
printf("cumle:");
say=0;
do
c=getchar();
if (c || eof) a[say]=getchar();
say++;
}
while (c!=EOF)
//uz=strlen(a)1;
terscumle(*a);





getch();
}