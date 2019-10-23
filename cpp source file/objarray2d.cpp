#include <iostream>

using namespace std;
class A{
    int a,b;
public:
    A(int x,int y){a=x;b=y;}
    void add(int p,int q){
        cout<<"\nobj["<<p<<"]["<<q<<"] : a+b="<<a+b<<endl;
    }
};
int main(){
    A obj[2][3]={A(0,9),A(1,0),A(1,1),A(1,2),A(1,3),A(1,4)};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            obj[i][j].add(i,j);
    }
return 0;
}
