#include <iostream>
using namespace std;

class base1{
public:
    int a;
    base1(int x){
        a=x;
    }
};

class base2{
public:
    int b;
    base2(int y){
        b=y;
    }
};

class derived:public base1,public base2{
public:
    int c;
    derived(int z):base1(4),base2(5){
        c=z;
    }
};

int main(){
    derived obj(9);
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    return 0;
}







