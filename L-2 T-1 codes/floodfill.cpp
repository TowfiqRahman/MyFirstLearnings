/// floodffill does not work EXCEPT BLACK OR WHITE!!!!
#include <graphics.h>

int main(){

    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

     floodfill(1,1,BLUE);

    setcolor(4);
    rectangle(100,100,400,400);


    //rectangle(100,144,140,184);
    //setfillstyle(SOLID_FILL,WHITE);
    //floodfill(135,150,GREEN);

    getch();
    closegraph();
}
/// WE HAVE TO USE SETFILLSTYLE TO COLOR BOXES
/// AND SETCOLOR TO COLOR OUTER LINE
