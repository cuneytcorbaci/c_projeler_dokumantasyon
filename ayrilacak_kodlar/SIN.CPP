#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <math.h>
const pi = 3;
int mod,yvr,yvt;
float i,s,ss, adim, vtmax,vrmax,f,vr,vt;
main()
{ clrscr();
puts("Vrmax de§erini giriniz : ");scanf("%f.10",&vrmax);
puts("Vtmax de§erini giriniz : ");scanf("%f.10",&vtmax);
puts("f de§erini giriniz : ");scanf("%f",&f);

 adim=f*360/65535;
 ss=0;
for (i=0;i<360;i+=adim)
   {
    vr=vrmax*sin(i);
    if ((i>=0)&&(i	<=90))  { vt=((4*vtmax)*2*pi)*i;  }
    if ((i>90)&&(i<=270))  { vt=((2*vtmax)-((4*vtmax)/2*pi)*i);  }
    if ((i>270)&&(i<360))  { vt=((4*vtmax)/2*pi)*i-4*vtmax;  }

    if (vr<vt) s=0; else s=1;
     if ( ss!=s ) {printf("%f",i);ss=s;}
   }


getch();



}