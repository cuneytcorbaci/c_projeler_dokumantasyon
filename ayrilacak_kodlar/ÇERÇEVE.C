int a,b;
int satir=1,sutun=1,maxs=24,maxt=80;
main()
{clrscr();
b=0;
while ( b<12 )
{
gotoxy(sutun,satir);printf("%c",201);
for(a=sutun+1;a<maxt;a++)
{gotoxy(a,satir);printf("%c",205);}
gotoxy(maxt,satir);printf("%c",187);
for (a=satir+1;a<maxs;a++)
{gotoxy(maxt,a);printf("%c",186);}
gotoxy(maxt,maxs);printf("%c",188);
for (a=maxt-1;a>sutun;a--)
{gotoxy(a,maxs);printf("%c",205);}
gotoxy(sutun,maxs);printf("%c",200);
for (a=maxs-1;a>satir;a--)
{gotoxy(sutun,a);printf("%c",186);}
b++;satir++;sutun++;maxs--;maxt--;
}
getch();
}
