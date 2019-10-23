#include <iostream>
using namespace std;

class rect{
    int h,w;
public:
    void set(int a,int b){
        h=a;w=b;
    }
    int area(){
        return h*w;
    }
};
int main(){
    rect a[5],*p;
    int i;

    a[0].set(1,2);
    a[1].set(2,3);
    a[2].set(3,4);
    a[3].set(4,5);
    a[4].set(5,6);
    p=a;
    for(i=0;i<5;i++){
        cout<<i+1<<" = "<<(p+i)->area()<<endl;
    }
    return 0;
}
