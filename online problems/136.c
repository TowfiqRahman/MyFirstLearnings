///result:859963392.
#include <stdio.h>

int main(){
    long long int n,count;
    count=11;
    n=15;
    while(count<1500){
        if(n%7!=0){
            if( n%2==0 && n%3==0 || n%2==0 && n%5==0 || n%3==0 && n%5==0 || n==5*5)
                count++;
        }
        ++n;

    }
    printf("The %lld'th ugly number is %lld.\n",count,n);
    return 0;
}
