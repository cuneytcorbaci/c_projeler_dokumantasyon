#include <stdio.h>
#define indis 51
char cumle[indis];

main()
{
int say;
clrscr();
printf("bir cumle gir");
for (say=0;say<indis;++say)
{
 cumle[say]=getchar();
}
 printf("\n cmleyi byk harfle yazyorum.");
 for (say=0;say<indis;++say)
   putchar(toupper(cumle[say]));
   getch();
}

