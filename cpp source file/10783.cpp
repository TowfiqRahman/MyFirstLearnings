#include <iostream>
using namespace std;

int main(){
int res,a,b,t,count;
cin>>t;
count=1;
while(t--){
    res=0;
    cin>>a>>b;
    if(a%2==0)
        a=a+1;
    if(b%2==0)
        b=b-1;
    while(a<=b){
        res=res+a;
        a+=2;
    }
    cout<<"Case "<<count<<":"<<' '<<res<<endl;
    count++;
}
return 0;
}
