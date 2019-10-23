#include <iostream>
 using namespace std;
 class rect{
public:
    int height;
    int width;
    int area();
};
inline int rect::area(){
    return height*width;
}
 int main(){
     rect a;
     cin>>a.height>>a.width;
     cout<<a.height<<' '<<a.width<<' '<<a.area()<<endl;
    return 0;
}
