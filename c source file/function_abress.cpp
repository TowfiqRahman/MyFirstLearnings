///finding functiion address

#include <iostream>
using namespace std;

int abc(int a,int b){
    return a+b;
}
void abc(int a){
    cout<<a<<endl;
}
int main(){
    int (*p2)(int,int);
    p2 = abc;
    cout<<p2<<endl;
    cout<<p2(5,6)<<endl;

    void (*p)(int);
    p = abc ;
    cout<<p<<endl;
    p(9);

return 0;
}
