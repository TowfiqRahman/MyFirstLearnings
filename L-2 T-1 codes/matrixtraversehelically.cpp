#include <iostream>
using namespace std;

int main(){
    int row=0,col=0,size=0,matrix[10][10];
    cout<<"Matrix size : ";
    cin>>size;
    cout<<"Enter matrix elements : ";
    for(row=0;row<size;row++){
        for(col=0;col<size;col++)
            cin>>matrix[row][col];
    }
    cout<<endl<<"Sowing matrix:"<<endl;
    for(row=0;row<size;row++){
        for(col=0;col<size;col++)
            cout<<ends<<matrix[row][col]<<ends<<ends;
        cout<<endl;
    }
return 0;
}
