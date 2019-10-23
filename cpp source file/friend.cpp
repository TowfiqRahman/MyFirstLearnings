#include <bits/stdc++.h>

using namespace std;

class A{
    int prv1;
    public:
    A(){prv1=0;}
    void getprv1(int x){prv1=x;}
    friend class B;
};

class B{
    int prvb1;
    public:
    B(){prvb1=0;}
    void getprvb1(A a){
        prvb1=a.prv1+25;
        a.prv1=50;
    }
    void show(A a){
        cout<<"\n Value of prv1="<<a.prv1<<endl;
        cout<<"\n Value of prvb1="<<prvb1<<endl;
    }
};
int main(){
    A a1;B b1;
    a1.getprv1(30);
    b1.getprvb1(a1);
    b1.show(a1);
    return 0;
}
