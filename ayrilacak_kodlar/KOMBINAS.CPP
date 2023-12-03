#include <stdio.h>
#include <conio.h>
 int fak(int x){
int top=1;
for (int i =2;i<=x;i++){
top*=i;
}
return top;
}


main(){
 clrscr();
 int n,k;
 float c=0;
 printf("N Saysn Giriniz : ");scanf("%d",&n);
 printf("K Saysn Giriniz : ");scanf("%d",&k);
c=(fak(n)/(fak(k)*fak(n-k)));

printf("Sonuc : %f",c);
getch();
}