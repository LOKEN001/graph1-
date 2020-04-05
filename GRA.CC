#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm,err;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 err = graphresult();
 if(err!=grOk)
 {
  printf("graph error %s",grapherrormsg(err));                       `
  getch();
  exit(1);
 }
 outtext("onlyloki");
 outtextxy(20,25,"onlyloki");
 getch();
 closegraph();
 return 0;
}