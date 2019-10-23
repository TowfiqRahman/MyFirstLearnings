#include <iostream>
using namespace std;
class rect{
private:
    int h,w;
public:
    rect();
    int area();
    ~rect();
    };
int rect::area(){
    return h*w;
    }
rect::rect(){
    cin>>h>>w;
    cout<<"constructor"<<" h = "<<h<<" w = "<<w<<" "<<area()<<endl;
    }
rect::~rect(){
    cout<<"destructor"<<" "<<h<<" "<<w<<endl;// creating constructor and destructor.
    }
int main (){
    rect obj1,obj2;
    cout<<"area1: "<<obj1.area()<<" "<<"area2: "<<obj2.area()<<endl;
    return 0;
}
