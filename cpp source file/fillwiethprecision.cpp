#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double val=10.3547832;
    int valu=(int)val;
    cout.fill('.');
    cout<<"Name:";
    cout.width(24);
    cout<<"sadman sakib sucks "<<endl;
    //cout.width(10);
    cout.fill('*');
    cout<<"salary : ";
    cout.precision(5);
    cout.width(20);
    cout.setf( ios::showpoint | ios::fixed);
    cout<<skipws<<val<<endl;
    cout.unsetf(ios::dec);
    cout.setf(ios::showbase | ios::hex);
    cout.width(10);
    cout<<endl<<valu;
    return 0;
    }
