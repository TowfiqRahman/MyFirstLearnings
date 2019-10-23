#include <graphics.h>

int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    bar(200,200,400,300);
    bar(400,250,450,300);
    arc(200,320,0,360,20);
    arc(400,320,0,360,20);
    bar(150,250,200,300);

    getch();
    closegraph();
}
