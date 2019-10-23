#include <iostream>
#include <string.h>
using namespace std;
int main(){
int tc,TC=1;
string arr,rev;
cin>>tc;
while(TC<=tc){
    cin>>arr;
    rev=arr;
    rev=string(rev.rbegin(),rev.rend());
    if(arr==rev)
        cout<<"Case "<<TC<<": "<<"Yes"<<endl;
    else
        cout<<"Case "<<TC<<": "<<"No"<<endl;
    TC++;
}
return 0;
}
