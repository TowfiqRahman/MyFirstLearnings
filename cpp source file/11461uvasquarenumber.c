#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long int i,j;
    int count,k,x=0;
    while(1){
        scanf ("%lld %lld",&i,&j);
        if(i==j==0)
            break;
        else{
            k=0;count=0;
            for(k=i;k<=j;k++){
                x=sqrt(k);
                x*=10;
                if((int)x%10==0)
                    count++;
            }
        }
        printf ("%d",count);
    }
return 0;
}
