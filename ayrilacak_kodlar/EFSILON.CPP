#include <stdio.h>
#include <conio.h>
#include<math.h>
int fak(int x){
int top=1;
for (int i =2;i<=x;i++){
top*=i;
}
return top;
}


main (){
clrscr();
int n,k,x;

printf("n Saysn Giriniz : ");scanf("%d",&n);
printf("x Saysn Giriniz : ");scanf("%d",&x);
printf("k Saysn Giriniz : ");scanf("%d",&k);
float top=0;
int us;
for (int i=k; i<=n; i++){
us= pow( x, i);
top+= us /fak(i);

}

printf("sonu‡ : %f",top);
getch();
}