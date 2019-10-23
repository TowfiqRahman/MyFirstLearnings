#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long double i,j;
    int count,k;
    double x;
    while(1){
        cin>>i>>j;
        k=0;count=0,x=0;
        if(i!=0 && j!=0){
            for(k=i;k<=j;k++){
                x=sqrt(k);
                x*=100000;
                if((int)x%100000==0)
                    count++;
            }
         cout<<count<<endl;
        }
        else break;
    }
return 0;
}
