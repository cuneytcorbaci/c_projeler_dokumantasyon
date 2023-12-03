#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdl'b.h>
main()
{
char *p;
p=malloc(24);
if (!p) {
printf("hata");
exit(1);

}
strcpy(p,"bu katar 23 karakter");
clrscr();
printf("%s\n",p);
p=realloc(p,25);

if (!p) {
printf("hata");
exit(1);

}
strcat(p,".");
printf("%s ",p);
free(p);
getch();

}