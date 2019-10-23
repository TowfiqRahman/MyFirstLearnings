#include <iostream>
using namespace std;

class rect;

class cost{
    int costrate;
    public:
    void setvalue(int a){
        costrate=a;
    }
    int totalcost(rect a);
    /*{
        return costrate*a.h*a.w;
    }
    int area(rect a){
        return a.h*a.w;
    }*/
};

class rect{
    int h,w;
    public:
    void set(int a,int b){
        h=a;
        w=b;
    }
    int area(){
        return h*w;
    }
    friend int cost::totalcost(rect a);
};

int cost::totalcost(rect a){
        return costrate*a.h*a.w;
}

int main(){
    int n,m;
    rect r;
    cin>>m>>n;
    r.set(m,n);
    cost c;
    cin>>n;
    c.setvalue(n);
    cout<<"Area : "<<r.area()<<endl;
    cout<<"Total cost : "<<c.totalcost(r)<<endl;
    return 0;
}
