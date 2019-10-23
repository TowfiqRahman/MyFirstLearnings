#include <iostream>
#include <graphics.h>
#include <stdio.h>
using namespace std;

bool flag[46];
char seats[45][3]={"","A1","A2","A3","A4","B1","B2","B3","B4","C1","C2","C3","C4","D1","D2","D3","D4","E1","E2","E3","E4","F1","F2","F3","F4","G1","G2","G3","G4","H1","H2","H3","H4","I1","I2","I3","I4","J1","J2","J3","J4","K1","K2","K3","K4"};

void reservations();
void myticket();

int main(){
    flag[5]=1;flag[7]=1;flag[9]=1;flag[15]=1;flag[25]=1;flag[43]=1;
    reservations();
    flag[44]=1;
    //myticket();
return 0;
}
void myticket(){
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int n=0;
    while(1){
        cout<<"\t Enter your seat number :";
        cin>>n;
        if(n==0 || n>44 || flag[n]==0){
            cout<<"\t !!! Invalid seat number !!!\n\t   * Try again. *"<<endl;
        }
        else break;
    }
    const int no=n;
    int i,j,x=0;
    setcolor(BLUE);
    rectangle(20,80,626,336);
    rectangle(19,79,627,337);
    rectangle(21,81,625,335);

    setcolor(CYAN);
    rectangle(40,290,100,315);
    rectangle(39,289,101,316);
    rectangle(38,288,102,317);
    setcolor(YELLOW);
    char door[5]="DOOR";
    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    outtextxy(48,295,door);

    setcolor(RED);
    rectangle(40,99,67,221);
    rectangle(41,100,66,220);
    rectangle(39,98,68,222);
    setcolor(GREEN);
    char arrA[20]=" DRIVER ";
    settextstyle(BOLD_FONT,VERT_DIR,2);
    outtextxy(43,210,arrA);

    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    setcolor(LIGHTGREEN);
    for(i=0,x=1,j=0;j<11;j++){
        if(x==no)setfillstyle(SOLID_FILL, GREEN);
        else setfillstyle(SOLID_FILL, YELLOW);
        bar(130+i,100,170+i,140);
        outtextxy(130+10+i,100+10,seats[x]);
        i=i+44; x+=4;
    }
    for(i=0,x=2,j=0;j<11;j++){
        if(x==no)setfillstyle(SOLID_FILL, GREEN);
        else setfillstyle(SOLID_FILL, YELLOW);
        bar(130+i,144,170+i,184);
        outtextxy(130+10+i,144+10,seats[x]);
        i=i+44; x+=4;
    }
    for(i=0,x=3,j=0;j<11;j++){
        if(x==no)setfillstyle(SOLID_FILL, GREEN);
        else setfillstyle(SOLID_FILL, YELLOW);
        bar(130+i,232,170+i,272);
        outtextxy(130+10+i,232+10,seats[x]);
        i=i+44; x+=4;
    }
    for(i=0,x=4,j=0;j<11;j++){
        if(x==no)setfillstyle(SOLID_FILL, GREEN);
        else setfillstyle(SOLID_FILL, YELLOW);
        bar(130+i,276,170+i,316);
        outtextxy(130+10+i,276+10,seats[x]);
        i=i+44; x+=4;
    }
    getch();
    closegraph();
}
void reservations(){
    int gd = DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int i,j,x;
    floodfill(1,1,BLACK);
    setcolor(BLUE);
    rectangle(20,80,626,336);
    rectangle(19,79,627,337);
    rectangle(21,81,625,335);

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(60,440,90,470);
    setcolor(LIGHTRED);
    char stu[15]="Reserved";
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(100,445,stu);

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    bar(400,440,430,470);
    setcolor(LIGHTRED);
    char stuA[6]="EMPTY";
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(450,445,stuA);

    setcolor(CYAN);
    rectangle(40,290,100,315);
    rectangle(39,289,101,316);
    rectangle(38,288,102,317);
    setcolor(YELLOW);
    char door[5]="DOOR";
    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    outtextxy(48,295,door);

    setcolor(RED);
    rectangle(40,99,67,221);
    rectangle(41,100,66,220);
    rectangle(39,98,68,222);
    setcolor(GREEN);
    char arrA[20]=" DRIVER ";
    settextstyle(BOLD_FONT,VERT_DIR,2);
    outtextxy(43,210,arrA);

    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    setcolor(YELLOW);
    for(i=0,x=1,j=0;j<11;j++){
        if(flag[x]==1)setfillstyle(SOLID_FILL, LIGHTBLUE);
        else setfillstyle(SOLID_FILL, LIGHTGREEN);
        bar(130+i,100,170+i,140);
        outtextxy(130+10+i,100+10,seats[x]);
        i=i+44; x+=4;
    }
    for(i=0,x=2,j=0;j<11;j++){
        if(flag[x]==1)setfillstyle(SOLID_FILL, LIGHTBLUE);
        else setfillstyle(SOLID_FILL, LIGHTGREEN);
        bar(130+i,144,170+i,184);
        outtextxy(130+10+i,144+10,seats[x]);
        i=i+44; x+=4;
    }
    for(i=0,x=3,j=0;j<11;j++){
        if(flag[x]==1)setfillstyle(SOLID_FILL, LIGHTBLUE);
        else setfillstyle(SOLID_FILL, LIGHTGREEN);
        bar(130+i,232,170+i,272);
        outtextxy(130+10+i,232+10,seats[x]);
        i=i+44; x+=4;
    }
    for(i=0,x=4,j=0;j<11;j++){
        if(flag[x]==1)setfillstyle(SOLID_FILL, LIGHTBLUE);
        else setfillstyle(SOLID_FILL, LIGHTGREEN);
        bar(130+i,276,170+i,316);
        outtextxy(130+10+i,276+10,seats[x]);
        i=i+44; x+=4;
    }

    getch();
    closegraph();
}
