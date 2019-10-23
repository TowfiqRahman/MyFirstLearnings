#include <iostream>

using namespace std;
class test{
private:
    int x;
public:
    void value(int a)  {x=a;}
    int getx(){return x;}
};
void pow(test *);

int main(){
    test tst;
    tst.value(10);
    cout<<"before assining\t\t"<<tst.getx();
    pow(&tst);
    cout<<"\vafter assining\t\t"<<tst.getx()<<endl;

return 0;
}
void pow(test *t1){
    t1->value(20*t1->getx());
}
