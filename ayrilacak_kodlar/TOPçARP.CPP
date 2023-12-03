#include <stdio.h>
#include <conio.h>

int sayi,i,sayi1,sayi2;
main()
{
clrscr();
printf("Birinci Sayi Giriniz :");scanf("%d",&sayi1);
printf("˜kinci Sayi Giriniz :");scanf("%d",&sayi2);
int top=0;
for (int i=1;i<=sayi2;i++){
 top+=sayi1;
}
printf("Toplam : %d",top);

getch();
}