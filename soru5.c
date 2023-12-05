//Girilen sayının faktoriyelini hesaplayan programı yazın.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int fakt=1;
    int i;

    printf("Sayi: ");
    scanf("%d",&i);

    for (int j = 1; j <=i; j++)
    {
        fakt=fakt*j;
        printf("Adim %d: %d! = %d\n", j, j, fakt);        
    }
    printf("Faktoriyel :%d\n",fakt);

    return 0;
}
