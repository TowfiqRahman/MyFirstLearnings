#include <iostream>
using namespace std;

int main(){
int a,b,c,temp,t,cont;
cin>>t;
cont=1;
while(t--){
    cin>>a>>b>>c;
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
    if((a+b)>c){
        if(a==b && b==c)
            cout<<"Case "<<cont<<":"<<" "<<"Equilateral"<<endl;
        else if(a==b && b!=c || b==c && a!=b || a==c && c!=b)
            cout<<"Case "<<cont<<":"<<" "<<"Isosceles"<<endl;
        else
            cout<<"Case "<<cont<<":"<<" "<<"Scalene"<<endl;
        }
    else
        cout<<"Case "<<cont<<":"<<" "<<"Invalid"<<endl;
    cont++;
    }
return 0;
}
