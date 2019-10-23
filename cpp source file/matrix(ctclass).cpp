#include <iostream>
//#include "matrics.h"

using namespace std;

class mat{
public:
    int arr[2][2];

    mat operator+(mat m);
    friend ostream& operator<< (ostream &os,mat m);
    friend istream& operator>> (istream &is,mat &m);  ///***friend desclare na korle kaj korbe na...
};
ostream& operator<<(ostream &os,mat m){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++)
            os<<m.arr[i][j]<<ends;
        os<<endl;
    }
    return os;
}
istream& operator>>(istream &is,mat &m){
    cout<<"enter value : \n";
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++)
            is>>m.arr[i][j];
    }
    return is;
}

mat mat::operator+(mat m){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++)
            {arr[i][j]+=m.arr[i][j];
            cout <<arr[i][j]<<ends;}    ///***ends gives a space....
            cout <<endl;
    }
    return (*this);
}



int main(){
    mat a,b,c;
    cin>>a;
    cout<<"showing value:\n"<<a;
    cin>>b;
    cout<<"showing value:\n"<<b;
    cin>>c;
    ///cout<<"showing value:\n"<<c;

    cout<<"adding value\n";
    c=a+b+c;
    cout<<"showing value:\n"<<c;
return 0;
}
