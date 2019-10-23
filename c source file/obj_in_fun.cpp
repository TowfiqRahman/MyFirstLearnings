#include <iostream>
using namespace std;
class rect{
    int h,w;
public:
    void set(int h,int w){
        this->h=h;
        this->w=w;
    }
    int area(){
        return h*w;
    }
};
rect scan(){
    int h,w;
    cin>>h>>w;
    rect obj;
    obj.set(h,w);
    return obj;
}
void print(rect a){
    cout<<a.area()<<endl;
}
int main(){
    rect b;
    b=scan();
    print(b);
    return 0;
}
