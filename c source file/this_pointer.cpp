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
int main(){
    rect a;
    a.set(4,5);
    cout<<a.area()<<endl;

    return 0;
}
