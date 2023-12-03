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
 int x,n,y;
 printf("n Saysn Giriniz : ");scanf("%d",&n);
 printf("x Saysn Giriniz : ");scanf("%d",&x);
float  top= x;
for (int i=2;i<=n;i+=2){

 top+=((i*x)/fak(i));
}

for (i=3;i<=n;i+=2){

 top-=((i*x)/fak(i));
}
printf("Sonuc : %f",top);
getch();
}