#include <graphics.h>
int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    bar3d(100,100,300,300,50,1);
    outtextxy(100,350,"Enter any key to close");

    getch();
    closegraph();
}
