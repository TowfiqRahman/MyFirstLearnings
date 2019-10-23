#include <iostream>
using namespace std;
char gameboard[3][3];

void drawboard();
int showres(char ch);
int validateinput(int cell);
void turnplayerO(int *pcell);
void turnplayerX(int *pcell);
void getrowcol(int cell,int *px,int *py);

int main(){
    int x=0,y=0,row=0,col=0,selectedcell=0,availablecell=9;
    char startchar='1';
    for(row=0;row<3;row++){
        for(col=0;col<3;col++)
            gameboard[row][col]=startchar++;
    }
    drawboard();
    while(availablecell>=0){
        turnplayerX(&selectedcell);
        getrowcol(selectedcell,&x,&y);
        gameboard[x][y]='X';
        availablecell-=1;
        drawboard();
        if(showres('X')==1)
            break;
        else if(availablecell==0){
            cout<<endl<<"-----------Game Drawn---------"<<endl;
            break;
        }
        turnplayerO(&selectedcell);
        getrowcol(selectedcell,&x,&y);
        gameboard[x][y]='O';
        availablecell-=1;
        drawboard();
        if(showres('O')==1)
            break;
        else if(availablecell==0){
            cout<<endl<<"-----------Game Drawn----------"<<endl;
            break;
        }
    }
return 0;
}
void drawboard(){
    int i,j;
    cout<<endl<<"********   *** TIC TACK TOE ***    ********"<<endl<<endl<<"------>Digits 1 to 9 indicates valid cell number"<<endl;
    cout<<endl<<"\t\t"<<gameboard[0][0]<<"   | "<<gameboard[0][1]<<"  | "<<gameboard[0][2]<<endl;
    cout<<"\t\t"<<"----|----|----"<<endl;
    cout<<"\t\t"<<gameboard[1][0]<<"   | "<<gameboard[1][1]<<"  | "<<gameboard[1][2]<<endl;
    cout<<"\t\t"<<"----|----|----"<<endl;
    cout<<"\t\t"<<gameboard[2][0]<<"   | "<<gameboard[2][1]<<"  | "<<gameboard[2][2]<<endl<<endl;
}
void turnplayerO(int *pcell){
    int cell;
    do{
        cout<<endl<<"      -->  player O"<<endl<<"\t--->select valid cell number: ";
        cin>>cell;
    }while(0==validateinput(cell));
    *pcell=cell;
}
void turnplayerX(int *pcell){
    int cell;
    do{
        cout<<endl<<"    --->  player X"<<endl<<"\t--->select valid cell number: ";
        cin>>cell;
    }while(0==validateinput(cell));
    *pcell=cell;
}
void getrowcol(int cell,int *px,int *py){
    *px=(cell-1)/3;
    *py=(cell-1)%3;
}
int validateinput(int cell){
    int row,col;
    if((cell<1)|| (cell>9))
        return 0;
    getrowcol(cell,&row,&col);
    if(('O'==gameboard[row][col])||('X'==gameboard[row][col]))
        return 0;
    return 1;
}
int showres(char ch){
    int status=0;
    if(gameboard[0][0]==ch && gameboard[1][1]==ch && gameboard[2][2]==ch){
        cout<<endl<<endl<<"--->  !!!!!Player "<<ch<<" is winner!!!!!!"<<endl;
        status=1;
    }
    else if(gameboard[0][2]==ch && gameboard[1][1]==ch && gameboard[2][0]==ch){
        cout<<endl<<endl<<"--->  !!!!!Player "<<ch<<" is winner !!!!!!"<<endl;
        status=1;
    }
    else if(gameboard[0][0]==ch && gameboard[1][0]==ch && gameboard[2][0]==ch){
        cout<<endl<<endl<<"---> !!!!!!Player "<<ch<<" is winner"<<endl;
        status=1;
    }
    else if(gameboard[1][0]==ch && gameboard[1][1]==ch && gameboard[1][2]==ch){
        cout<<endl<<endl<<"Player "<<ch<<" is winner"<<endl;
        status=1;
    }
    else if(gameboard[2][0]==ch && gameboard[2][1]==ch && gameboard[2][2]==ch){
        cout<<endl<<endl<<"Player "<<ch<<" is winner"<<endl;
        status=1;
    }
    else if(gameboard[0][0]==ch && gameboard[0][1]==ch && gameboard[0][2]==ch){
        cout<<endl<<endl<<"Player "<<ch<<" is winner"<<endl;
        status=1;
    }
    else if(gameboard[0][1]==ch && gameboard[1][1]==ch && gameboard[2][1]==ch){
        cout<<endl<<endl<<"Player "<<ch<<" is winner"<<endl;
        status=1;
    }
    else if(gameboard[0][2]==ch && gameboard[1][2]==ch && gameboard[2][2]==ch){
        cout<<endl<<endl<<"Player "<<ch<<" is winner"<<endl;
        status=1;
    }
    return status;
}
