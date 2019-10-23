#include <iostream>
using namespace std;

class number{
    int x,y;
public:
    number(){x=0;y=0;}
    number(int a,int b){x=a;y=b;}
    void set(int a,int b){x=a;y=b;}
    void show(){cout<<x<<" "<<y<<endl;}

    number operator +(number ob);///same for + - / *
    bool operator >(number ob);
    bool operator <(number ob);
    bool operator ==(number ob);
    bool operator &&(number ob);

    number operator ++();

};

number number::operator ++(){
    number temp;
    temp.x=x+1;
    temp.y=y+1;
    return temp;
    }
number number :: operator +(number ob){
    number temp;
    temp.x=x+ob.x;
    temp.y=y+ob.y;
    return temp;
}

bool number :: operator &&(number ob){
    return (x&&y) && (ob.x&&ob.y);
}

bool number :: operator >(number ob){
    return (x+y) > (ob.x+ob.y);
}

bool number :: operator <(number ob){
    return (x+y) < (ob.x+ob.y);
}

bool number :: operator ==(number ob){
    return (x+y) == (ob.x+ob.y);
}

int main(){
    number n,m,a;
    n.set(4,4);
    m.set(0,5);
    a=n+m;
    a.show();

    /*if(n&&m){cout<<"ok\n";}
    else cout<<"error\n";

    if(n>m)cout<<"n"<<endl;
    else if(n==m)cout<<"n==m\n";
    else cout<<"m";*/
return 0;
}
