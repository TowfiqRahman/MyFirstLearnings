#include <stdio.h>

int main(){
    int a,b,x,gcd;
    while(scanf("%d\n%d",&a,&b)!=EOF){
        if(a<b){
            x=a;
        }
        else {
            x=b;
        }
        while(x>=1){
            if(a%x==0 && b%x==0){
                gcd=x;
                break;
            }
            x--;
        }
        printf("GCD of %d and %d Is: %d\n",a,b,gcd);
    }
    return 0;
}
