#include <graphics.h>

int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int maxX=getmaxx();
    int color;
    for(int i=0,color=1;i<=maxX;color++,i++){
        setcolor(GREEN);        ///road
        line(0,370,maxX,370);
        line(0,374,maxX,374);

        setcolor(YELLOW);       ///Sun
        circle(100+i,100,50);

        setcolor(WHITE);         ///Bus Stand
        rectangle(525,250,535,370);
        rectangle(480,200,580,250);
        outtextxy(490,220," BUS STAND ");

        if(i<=300){
            setcolor(RED);           ///BUS
            rectangle(100+i,300,200+i,350);
            setcolor(WHITE);
            circle(120+i,360,10);
            circle(180+i,360,10);
        }
        else{
            setcolor(RED);           ///BUS
            rectangle(400,300,500,350);
            setcolor(WHITE);
            circle(420,360,10);
            circle(480,360,10);
        }
        if(color>15)color=1;
        setcolor(color);         ///PLANE
        line(450-i,100,500-i,100);///front area
        line(450-i,100,440-i,105);
        line(450-i,110,500-i,110);
        line(450-i,110,440-i,105);
        line(500-i,100,520-i,30);///top
        line(520-i,30,520-i,100);///wing
        line(500-i,110,520-i,180);///botom
        line(520-i,180,520-i,110);///wing

        line(520-i,100,570-i,100);
        line(520-i,110,570-i,110);

        line(570-i,100,580-i,70);
        line(580-i,70,580-i,100);

        line(570-i,110,580-i,140);
        line(580-i,140,580-i,110);

        line(580-i,100,585-i,100);
        line(580-i,110,585-i,110);
        line(585-i,110,585-i,100);


        if(i == 0){
            setcolor(LIGHTBLUE);
            outtextxy(200,200,"Press any key to start.");
            getch();
        }

        delay(20);
        if(i<maxX)cleardevice();
    }
    getch();
    closegraph();

}
