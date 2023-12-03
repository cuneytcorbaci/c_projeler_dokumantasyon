//girilen bir ifadeyi son ve bastan kac harf alincak
#include <stdio.h>
#include <string.h>

int main(void)
{
   char *string,*sec,dev='E';
   int i,bas,son,ort;

   while (dev!='H')
   {clrscr();
   printf("Lutfen Cumle veya Kelimeyi Girin\n");
   gets(string);
   do{
   printf("\n\nBastan Kac Harf Alinacak..:");scanf("%i",&bas);
   }while(strlen(string)<bas);
   do{
   printf("\nSondan Kac Harf Alinacak....:");scanf("%i",&son);
   }while(strlen(string)<son);
   printf("Iki Ifade Arasinda Bosluk Olsun mu?\n");
   printf("Seciminiz [E/ H]");scanf("%s",sec);


   for (i=0;i<bas;i++)
   {
   printf("%c",*(string+i));
   }
   if (*sec=='E')
   printf(" ");

   for (i=strlen(string)-son;i<strlen(string)+1;i++)
   {
   printf("%c",*(string+i));
   }
   printf("\n\nDevam Edecekmisiniz  [E / H] ");

   dev=getch();}
}

