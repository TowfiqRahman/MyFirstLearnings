#include <iostream>
#include <math.h>

using namespace std;

int main(){
double i,j,x;
int count;
while(1){
    cin>>i>>j;
    if(i==0 && j==0)
        break;
    x=0;count=0;
    while(i<=j){
        x=sqrt(i);
        x=floor(x);
        if((x*x)==i)
            count ++;
        i++;
        }
        cout<<count<<endl;
}
return 0;
}
