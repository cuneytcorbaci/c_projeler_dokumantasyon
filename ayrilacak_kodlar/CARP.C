main()
{int a,b,mod,car=0;
printf("\nA yi gir.:");scanf("%d",&a);
printf("B yi gir.:");scanf("%d",&b);
if(a%2==1) car=car+b;
do{
mod=a%2;a=a-mod;a=a/2;
b=b*2;mod=a%2;
if(mod==1) car=car+b;
}while(a!=1);
printf("Carpim..:%d",car);
getch();
}


























