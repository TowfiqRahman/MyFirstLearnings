#include <iostream>
using namespace std;

int main(){
    int *ptr,*ptr1;
    ptr= new int(1);
    cout<<*ptr<<endl;
    *ptr=10;
    cout<<*ptr<<endl;
    delete(ptr);
    ptr1= new int[5];
    ptr[1]=6;
    cout<<ptr[1]<<endl;
    cout<<*(ptr)<<endl;
    delete [] ptr1;
    return 0;
}
