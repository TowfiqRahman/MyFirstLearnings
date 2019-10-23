#include<iostream>
using namespace std;
class rect{
public:
    int h,d;
    int area();
    };
inline int rect::area(){//for decclearing inline
    return h*d;
    }
int main(){
    rect a;
    cin >> a.h >> a.d;
    cout << a.h <<" " << a.d <<" " <<"area: " << a.area() << endl;
    return 0;
}
