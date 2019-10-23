#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BIG");

    line(200,200,400,400);
    circle(400,200,50);
    outtextxy(380,195,"Circle");

    getch();
    cleardevice();

    setcolor(GREEN);
    rectangle(200,200,400,300);

    setcolor(YELLOW);
    circle(100,100,50);

    int maxX=getmaxx();
    int maxY=getmaxy();
    cout<<maxX<<ends<<maxY<<endl;

    getch();
    closegraph();

}
