#include <iostream>
#include <string.h>
using namespace std;
int main(){
string arr,revarr;
while(cin>>arr){
    ///revarr=arr;
    revarr=string(arr.rbegin(),arr.rend());
    arr=arr+revarr;
    cout<<arr<<endl;
}
return 0;
}
