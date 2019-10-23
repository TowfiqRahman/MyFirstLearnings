///refrence use korle function e value deya jabe na variable or address use korte hobe.
#include <iostream>
using namespace std;
int main(){
    int i;
    i=5;
    cout<<" i = "<<i<<endl;
    int *p;
    p=&i;
    cout<<"*p = "<<*p<<endl;
    int& r=i;
    cout<<" r = "<<r<<endl;

    r=7;
    cout<<" I = "<<i<<endl;
    cout<<"*p = "<<*p<<endl;
    cout<<" r = "<<r<<endl;

    return 0;
}
