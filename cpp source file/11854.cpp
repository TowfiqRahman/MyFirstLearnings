#include <iostream>
using namespace std;

int main(){
int a,b,c,temp;
while(1){
    cin>>a>>b>>c;
    if(a==0)
    return 0;
    if(a>c || b>c){
        if(a>b && a>c){
            temp=a;
            a=c;
            c=temp;
        }
        if(b>a && b>c){
            temp=b;
            b=c;
            c=temp;
        }
    }
    if(c*c==(a*a+b*b))
        cout<<"right"<<endl;
    else
        cout<<"wrong"<<endl;
    }
return 0;
}
