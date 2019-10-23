#include <iostream>
using namespace std;
class a{
int i;
public:
    a(){}
    a(int x){ i=x; }
};
int main(){
a *p;///,a1[5]={a(),a(5),a(6)};
p=new a[4]{1,3,4};
return 0;
}
