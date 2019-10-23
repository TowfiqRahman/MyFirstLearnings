#include <stdio.h>

int main(){
    long long int h,o,temp;
    while( scanf("%lld%lld",&h,&o) != EOF){
        if(h>o){
            temp = h;
            h = o;
            o = temp;
            }
        printf("%lld\n",(o-h));
    }
    return 0;
    }
