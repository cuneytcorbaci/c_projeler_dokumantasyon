//Birden fazla girilen sayının faktoriyelini hesaplayan programı yazın.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int fakt=1;
    int sayi;
    int adet;

    printf("Kac adet faktoryel deger hesaplanacak: ");
    scanf("%d",&adet);

    for (int k = 0; k <= adet-1; k++)
    {
        printf("\n%d. sayiyi girin= ",k+1);
        scanf("%d",&sayi);
        fakt=1;
        for (int i = 1; i <=sayi; i++)
        {
            fakt=fakt*i;
        }
        printf("Faktoryel=%d\n",fakt);
        
    }
    

    return 0;
}
