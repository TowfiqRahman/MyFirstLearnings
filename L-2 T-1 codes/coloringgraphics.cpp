#include <graphics.h>
#include <iostream>
#include <stdio.h>
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

    int x,i=44*11;
    char arr[2];
    setfillstyle(SOLID_FILL, GREEN); ///to color the seat box
    bar(100-44+i,188,140-44+i,228); x=45;
        sprintf(arr,"%d",x);
        settextstyle(BOLD_FONT,HORIZ_DIR,2);
        outtextxy(100-35+i,198,arr);
        /// WE HAVE TO USE SETFILLSTYLE TO COLOR BOXES
        /// AND SETCOLOR TO COLOR OUTER LINE
        ///SETTEXTSTYLE TO STYLE TEXT
        /// direction of the text can be changed by settextstyle
    getch();
    closegraph();

}
