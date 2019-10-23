#include <graphics.h>

int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    int point[8]={100,100,200,200,100,200,100,100};
    drawpoly(4,point);

    int points[8]={200,100,300,200,250,200,200,100};
    fillpoly(3,points);
    getch();
    cleardevice();

    getch();
    closegraph();
}
