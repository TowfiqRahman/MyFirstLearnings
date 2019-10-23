#include <iostream>
using namespace std;
class rect{
private:
    int hi,wi;
public:
    void set(int h,int w);
    int area();
};
void rect::set(int h,int w){
    hi=h;wi=w;
    }
int rect::area(){
    return hi*wi;
    }
int main (){
     rect a;
     a.set(5,6);
     cout<<"area: "<<a.area()<<endl;
     return 0;
}
