#include <conio.h>
#include <stdio.h>
void honoi(int N,int kaynak,int hedef){
   if( N==1) {
      printf("1. halkay, %d 'dan %d  'e taŸ ",kaynak,hedef);
   } else
       {
	honoi(--N,kaynak,6-kaynak-hedef);
	printf("%d. halkay, %d 'dan %d  'e taŸ ",N,kaynak,hedef);
	honoi(--N,6-kaynak-hedef,hedef);	       }
}



void main(){

honoi(3,1,2);
getch();

}


