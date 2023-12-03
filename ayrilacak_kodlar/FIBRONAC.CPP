#include <stdio.h>
#include <conio.h>

int sayi,i,sayi1,sayi2;
main()
{
clrscr();
printf("Bir Sayi Giriniz :");scanf("%d",&sayi);
printf("1,1");
i=2;
int top=2;
sayi2=2;
sayi1=1;
while (top<=sayi) {
printf(",%d",top);
top=sayi1+sayi2;
sayi1=sayi2;
sayi2=top;



}






getch();
}

