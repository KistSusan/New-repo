#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm,x=0,y=0,i=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
setbkcolor(7);
setcolor(RED);
//road
line(0,y+80,getmaxx(),y+80);

//car
//tyre
for(i=0;i<getmaxx();i++)
{

circle(40+i,y+80-15,15);
circle(100+i,y+80-15,15);
rectangle(10+i,y+80-15,130+i,y+30);
rectangle(30+i,y+30,100+i,y+10);
line(0,y+80,getmaxx(),y+80);

delay(10);
cleardevice();
}
getch();
closegraph();
}