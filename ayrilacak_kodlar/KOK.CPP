#include <stdio.h>
#include <conio.h>
#include<math.h>
main(){
 clrscr();
int n,y,x;

printf("n Sayçsçnç Giriniz : ");scanf("%d",&n);
printf("x Sayçsçnç Giriniz : ");scanf("%d",&x);
y=1;
for (int i=1;i<=n;i+=2){
 y+=(pow(x,i)/i*(sqrt(x)));
}
printf("Toplam: %d",y );

getch();


}


